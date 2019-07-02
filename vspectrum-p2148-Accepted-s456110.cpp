#include <iostream>
int main()
{
	int testcases;
	std::cin>>testcases;
	for(int i=0; i<testcases; ++i)
	{
		int a,b,c;
		std::cin>>a>>b>>c;
		if(b*b>=4*a*c) std::cout<<"SI"<<std::endl;
		else std::cout<<"NO"<<std::endl;
	}
	return 0;
}