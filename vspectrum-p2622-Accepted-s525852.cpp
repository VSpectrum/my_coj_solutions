#include <iostream>
#include <cmath>
#include <iomanip>
#define PI 3.14159265359
int main()
{
	int testcases;
	double length, angle, answer=0;
	std::cin>>testcases;
	while(testcases!=0)
	{
		std::cin>>length>>angle;
		angle = angle*PI/180.0;
		double kitearea = length*length*sin(angle);
		double radius = (kitearea/length)/2;
		double circlearea = radius*radius*PI;
		answer = (kitearea-circlearea);
		std::cout<<std::fixed<<std::setprecision(3)<<(answer)<<std::endl;
		--testcases;
	}
	return 0;
}