#include <iostream>
int main()
{
	unsigned long long input;
	int testcases;
	std::cin>>testcases;
	while(testcases!=0)
	{
		std::cin>>input;
		++input;
		if( ((input & (input - 1)) == 0) ) std::cout<<"NO"<<std::endl;
		else std::cout<<"YES"<<std::endl;
		--testcases;
	}
	return 0;
}