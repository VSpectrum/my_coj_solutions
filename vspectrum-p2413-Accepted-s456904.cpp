#include <iostream>
#include <string>
int main()
{
	std::string input;
	int testcases;
	std::cin>>testcases;
	for(int i=0; i<testcases; ++i)
	{
		std::cin>>input;
		if(input[input.length()-1]=='0' || input[input.length()-1]=='5') std::cout<<"YES"<<std::endl;
		else std::cout<<"NO"<<std::endl;
	}
	return 0;
}