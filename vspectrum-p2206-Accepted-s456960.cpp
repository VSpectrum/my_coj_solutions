#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>
int main()
{
	int testcases;
	std::cin>>testcases;
	for(int i=0;i<testcases;++i)
	{
		int R,p,q;
		double theta;
		std::cin>>R>>p>>q;
		theta = std::max(360-abs(p-q),abs(p-q));
		theta = (theta*3.1415926535897932)/180;
		double trianglearea = R*cos(theta/2)*R*sin(theta/2);
		double sectionarea = R*R*theta*0.5;
		printf("%.3f\n",sectionarea-trianglearea);
	}
	return 0;
}