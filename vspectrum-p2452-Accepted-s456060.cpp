#include <iostream>
#include <map>
#include <algorithm>
#include <cstdio>
#include <cmath>
int main()
{
	std::map<unsigned long long,float> idprices;
	int testcases;
	std::cin>>testcases;
	for(int i=0; i<testcases; ++i)
	{
		int inputs=0;
		std::cin>>inputs;
		unsigned long long id;
		float prices;
		std::map<unsigned long long,float>::iterator it;
		for(int j=0; j<inputs; ++j)
		{
			std::cin>>id>>prices;
			it = idprices.find(id);
			if(it!=idprices.end()) idprices[id] = std::min(idprices[id],prices);
			else idprices[id] = prices;
		}
		
		float sumup = 0;
		for (it=idprices.begin(); it!=idprices.end(); ++it)
		{
			sumup+=it->second;
    		//std::cout << it->first << " => " << it->second << '\n';
		}
			
		printf("%.2f\n", sumup);
		idprices.clear();
	}
}