#include <iostream>
#include <iomanip>
int main()
{
	double A,AandBprime, B;
	std::cin>>A>>AandBprime;
	B = 1-(AandBprime/A);
	std::cout<<std::fixed<<std::setprecision(2)<<B<<std::endl;
	return 0;
}