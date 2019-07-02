#include <iostream>
#include <iomanip>
#define PI 3.14159

int main()
{
	char Object;
	double R,H,maxV=0;
	int objects;
	std::cin>>objects;
	while(objects!=0)
	{
		std::cin>>Object;
		if(Object=='L')
		{
			std::cin>>R>>H;
			double VCyl = PI*R*R*H;
			if(VCyl>maxV) maxV=VCyl;
		}
		else if(Object=='C')
		{
			std::cin>>R>>H;
			double VCone = (1.0/3.0)*PI*R*R*H;
			if(VCone>maxV) maxV=VCone;
		}
		else
		{
			std::cin>>R;
			double VSphere = (4.0/3.0)*PI*R*R*R;
			if(VSphere>maxV) maxV=VSphere;
		}
		--objects;
	}
	std::cout<<std::fixed<<std::setprecision(3)<<maxV<<std::endl;
	return 0;
}