#include <iostream>
#include <vector>

int main()
{
	std::vector<int> scores;
	int tests, numscores, compscore;
	int input;
	std::cin>>tests;
	for(int i=0; i<tests; ++i)
	{
		std::cin>>numscores>>compscore;
		for(int i=0; i<numscores; ++i)
		{
			std::cin>>input;
			scores.push_back(input);
		}
		int leastscore = scores[compscore-1];
		int greaterthanleast = 0;
		for(int i=0; i<numscores; ++i)
			if(scores[i]>=leastscore && scores[i]>0) ++greaterthanleast;
		std::cout<<greaterthanleast<<std::endl;
		scores.clear();
	}
	return 0;
}