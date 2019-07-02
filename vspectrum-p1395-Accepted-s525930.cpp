#include <iostream>
#include <cmath>
#include <vector>

int main()
{
	std::vector<long long> store;
	store.push_back(0);
	double sum;
	for(int i=1; i<=10000000; ++i)
	{
		sum+=log10(i);
		store.push_back(floor(sum+1));
	}
	int testcases;
	std::cin>>testcases;
	int input;
	for(int i=0; i<testcases; ++i)
	{
		std::cin>>input;
		std::cout<<store[input]<<std::endl;
	}
	return 0;
}