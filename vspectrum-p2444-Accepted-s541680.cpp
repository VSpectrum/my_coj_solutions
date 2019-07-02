#include <iostream>
#include <bitset>
#include <cstdio>
int main()
{
	unsigned int input, answer=0;
	char fin = 0;
	while(std::cin>>input)
	{
		std::bitset<32> conv(input);
		if(conv.count()%2==0) ++answer;
	}
	std::cout<<answer<<std::endl;
	return 0;
}