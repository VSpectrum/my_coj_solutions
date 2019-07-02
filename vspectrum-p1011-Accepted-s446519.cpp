#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
int main()
{
	std::vector<int> Godz;
	std::vector<int> MGodz;
	std::vector<std::string> output;
	int numprobs=0;
	int tgodz=0;
	int tmgodz=0;
	int store=0;
	std::cin>>numprobs;
	for(int i=0; i<numprobs; ++i)
	{
		std::cin>>tgodz>>tmgodz;
		for(int j=0; j<tgodz; ++j)
		{
			std::cin>>store;
			Godz.push_back(store);
		}
		for(int j=0; j<tmgodz; ++j)
		{
			std::cin>>store;
			MGodz.push_back(store);
		}
		// std::sort (Godz.begin(), Godz.end());
		// std::sort (MGodz.begin(), MGodz.end());
		 int maxG=0;
		 for(int i=0; i<Godz.size(); ++i)
		 {
		 	if(Godz[i] > maxG ) maxG = Godz[i];
		 }
		 
		 int maxMG=0;
		 for(int i=0; i<MGodz.size(); ++i)
		 {
		 	if(MGodz[i] > maxMG ) maxMG = MGodz[i];
		 }

		 if(maxMG==maxG) output.push_back("Godzilla");
		 else if(maxMG>maxG) output.push_back("MechaGodzilla");
		 else output.push_back("Godzilla");
		 Godz.erase(Godz.begin(),Godz.end());
		 MGodz.erase(MGodz.begin(),MGodz.end());
	}
	for(int i=0; i<output.size(); ++i)
	{
		std::cout<<output[i]<<std::endl;
	}
	return 0;
}