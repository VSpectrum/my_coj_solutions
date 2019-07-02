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
		int j=0;
		if(input[0]=='-') ++j;
		for(; j<input.length(); ++j)
			sumup+=input[j]-'0';
		std::cout<<sumup<<std::endl;
	}
	return 0;
}