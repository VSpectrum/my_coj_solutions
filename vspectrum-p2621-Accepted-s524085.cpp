#include <cmath>
#include <iostream>
int main()
{
	int inp;
	std::cin>>inp;
	int out = 1 + int(log10(inp)/log10(2));
	std::cout<<out<<std::endl;
	return 0;
}