#include <iostream>
#include <string>

int main()
{
	std::string input;
	int inputcases;
	std::cin>>inputcases;
	for(int i=0; i<inputcases; ++i)
	{
		std::cin>>input;
		char inp = input[input.length()-1];
		if(inp=='2' || inp=='4' || inp=='6' || inp=='8' || inp=='0') std::cout<<"even"<<std::endl;
		else std::cout<<"odd"<<std::endl;
	}
	return 0;
}