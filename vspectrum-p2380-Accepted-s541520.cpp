#include <iostream>
#include <bitset>
int main()
{
	unsigned int inp, testcases, answer=0;
	std::cin>>testcases;
	while(testcases!=0)
	{
		std::cin>>inp;
		std::bitset<33> bitconv(inp);
		answer+=bitconv.count();
		--testcases;
	}
	std::cout<<answer<<std::endl;
	return 0;
}