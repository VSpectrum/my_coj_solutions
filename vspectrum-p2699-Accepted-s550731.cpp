#include <iostream>
#include <iomanip>
int main()
{
	double rain30days = 0, rain1day;
	for(int i=0; i<30; ++i) std::cin>>rain1day, rain30days+=rain1day;
	rain30days += rain30days/30;
	std::cout<<std::fixed<<std::setprecision(3)<<rain30days<<std::endl;
	return 0;
}