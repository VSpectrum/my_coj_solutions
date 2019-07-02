#include <iostream>
int x[3], y[3];

void findmissing()
{
	if(x[0]==x[1]) std::cout<<x[2]<<" ";
	else if(x[0]==x[2]) std::cout<<x[1]<<" ";
	else std::cout<<x[0]<<" ";
	
	if(y[0]==y[1]) std::cout<<y[2]<<std::endl;
	else if(y[0]==y[2]) std::cout<<y[1]<<std::endl;
	else std::cout<<y[0]<<std::endl;
	
	return;
}

int main()
{
	for(int i=0; i<3; ++i)
		std::cin>>x[i]>>y[i];
	findmissing();
	return 0;
}