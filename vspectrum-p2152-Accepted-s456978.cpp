#include <iostream>
#include <string>
int main()
{
	int testcases;
	std::cin>>testcases;
	std::string input;
	for(int i=0; i<testcases; ++i)
	{
		std::cin>>input;
		unsigned int sumup=0;
		for(int j=0; j<input.length(); ++j)
			if(input[j]>='0' && input[j]<='9')sumup+=input[j]-'0';
		std::cout<<sumup<<std::endl;
	}
	return 0;
}