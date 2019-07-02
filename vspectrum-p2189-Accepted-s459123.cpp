#include <iostream>
#include <iomanip>
int main()
{
	double K,M;
	std::cin>>K>>M;
	double ans = (K-M)*2.5;
	std::cout<<std::fixed<<std::setprecision(5)<<ans<<std::endl;
	return 0;
}