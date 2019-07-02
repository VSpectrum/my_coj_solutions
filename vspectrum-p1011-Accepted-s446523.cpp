#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
int main()
{
	std::vector<std::string> output;
	int numprobs=0;
	int tgodz=0;
	int tmgodz=0;
	std::cin>>numprobs;
	for(int i=0; i<numprobs; ++i)
	{
		int maxG=0;
		int maxMG=0;
		int store=0;
		std::cin>>tgodz>>tmgodz;
		for(int j=0; j<tgodz; ++j)
		{
			std::cin>>store;
			maxG=std::max(maxG,store);
		}
		for(int j=0; j<tmgodz; ++j)
		{
			std::cin>>store;
			maxMG=std::max(maxMG,store);
		}
		 if(maxMG==maxG) output.push_back("Godzilla");
		 else if(maxMG>maxG) output.push_back("MechaGodzilla");
		 else output.push_back("Godzilla");
	}
	for(int i=0; i<output.size(); ++i) std::cout<<output[i]<<std::endl;
	return 0;
}