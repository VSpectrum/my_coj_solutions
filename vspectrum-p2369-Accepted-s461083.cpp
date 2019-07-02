#include <iostream>
#include <algorithm>
#include <vector>
int main()
{
	int testcases;
 	std::vector<long long> input;
 	std::vector<long long> performed;
	long long inp;
	std::cin>>testcases;
	for(int i=0; i<testcases; ++i)
	{
		for(int i=0; i<3; ++i)
		{
			std::cin>>inp;
			input.push_back(inp);
		}
		performed.push_back(input[0]+input[1]);
		performed.push_back(input[0]+input[2]);
		performed.push_back(input[1]+input[2]);
		performed.push_back(input[0]*input[1]);
		performed.push_back(input[0]*input[2]);
		performed.push_back(input[1]*input[2]);
		performed[0]*=input[2];
		performed[1]*=input[1];
		performed[2]*=input[0];
		performed[3]+=input[2];
		performed[4]+=input[1];
		performed[5]+=input[0];
		std::sort(performed.begin(), performed.end());
		std::cout<<performed[0]<<" "<<performed[5]<<std::endl;
		performed.clear();
		input.clear();
	}
		return 0;
}