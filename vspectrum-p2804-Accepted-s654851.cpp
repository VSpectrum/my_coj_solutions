#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <cstdio>
std::string IPv4[3];
std::string sIP[3];

int main()
{
	int testcases;
	std::cin>>testcases;
	while(testcases!=0)
	{
		bool answer = false;
		
		for(int i=0; i<3; ++i) sIP[i]="";
		
		for(int i=0; i<3; ++i)
		{
			std::cin>>IPv4[i];
			std::stringstream ss(IPv4[i]);
			std::string token;
			int j=0;
			while(std::getline(ss, token, '.')) 
			{
	    		while(token.length()<3)
	    		{
	    			token.insert(0, 1, '0');
	    		}
	    		sIP[i]+=token;
			}
		}
		
		if(sIP[1]<sIP[0])
		{
			std::string hold = sIP[0];
			sIP[0] = sIP[1];
			sIP[1] = hold;
		}

		if(sIP[2]<=sIP[1] && sIP[2]>=sIP[0]) answer = true;
		
		if(answer) std::cout<<"YES"<<std::endl;
		else std::cout<<"NO"<<std::endl;
		--testcases;
	}
	return 0;
}