#include <iostream>
#include <vector>
#include <cmath>
std::vector<bool> primelist;
std::vector<int> onlyprimes;
std::vector<int> questions;
int max = 0;

int prunelist()
{
	for(int i=2; i<=max; ++i)
		for(int j=i+i; j<primelist.size(); j+=i)
			primelist[j]=false;
}

int main()
{
	int sum = 0;
	int input = 1;
	max = 0;
	bool nextq=false;
 	while(input!=0)
	{
		std::cin>>input;
		questions.push_back(input);
	}
	questions.pop_back();

	for(int i=0; i<questions.size(); ++i)
		if(questions[i]>max) max=questions[i];

	primelist.push_back(false);
	primelist.push_back(false);
	for(int i=2; i<=max; ++i) primelist.push_back(true);

	prunelist();

	for(int i=0; i<primelist.size(); ++i) if(primelist[i]) onlyprimes.push_back(i);

	//for(int i=0; i<onlyprimes.size(); ++i) std::cout<<onlyprimes[i]<<" ";

	for(int k=0; k<questions.size(); ++k)
	{
		for(int l=0; l<onlyprimes.size(); ++l)
		{
			int othernum = (questions[k]-onlyprimes[l]);
			if(primelist[othernum])
			{
				std::cout<<questions[k]<<" = "<<onlyprimes[l]<<" + "<<questions[k]-onlyprimes[l]<<std::endl;
				break;
			}
		}
 	}
	return 0;
}