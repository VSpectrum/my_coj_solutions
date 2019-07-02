#include <iostream>
#include <algorithm>
int main()
{
	int testcases;
	std::cin>>testcases;
	for(int i=1; i<=testcases; ++i)
	{
		int sumup=0, smin=2137483645, smax=0, store[10];
		for(int j=0; j<10; ++j)
  		{
			std::cin>>store[j];
			sumup+=store[j];
			smin = std::min(store[j],smin);
			smax = std::max(store[j],smax);
		}
		std::cout<<i<<" "<<sumup-smin-smax<<std::endl;
	}
	return 0;
}