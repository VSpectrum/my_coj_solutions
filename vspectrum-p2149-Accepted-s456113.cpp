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
		int countBig=0,countSmall=0;
		for(int i=0; i<input.length(); ++i)
		{
			if(input[i]>='a')++countSmall;
			else ++countBig;
		}
		if(countSmall==countBig) std::cout<<"SI"<<std::endl;
		else std::cout<<"NO"<<std::endl;
	}
	return 0;
}