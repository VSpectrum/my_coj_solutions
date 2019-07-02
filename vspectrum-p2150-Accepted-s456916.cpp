#include <iostream>
#include <string>
int main()
{
	int testcases;
	std::cin>>testcases;
	for(int i=0;i<testcases;++i)
	{
		std::string input;
		std::cin>>input;
		int counthigh=0,countlow=0;
		if(input.length()%2==1)
		{
			for(int i=0; i<input.length()/2; ++i)
				if(input[i]>='a')++countlow;
			for(int i=(input.length()/2)+1; i<input.length(); ++i)
				if(input[i]>='a')++counthigh;
		}
		else
		{
			for(int i=0; i<input.length()/2; ++i)
				if(input[i]>='a')++countlow;
			for(int i=(input.length()/2); i<input.length(); ++i)
				if(input[i]>='a')++counthigh;
		}
		
		if(countlow==counthigh) std::cout<<"SI"<<std::endl;
		else std::cout<<"NO"<<std::endl;
	}
	return 0;
}
