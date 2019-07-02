#include <iostream>
int ebottles, ebottles1, needed;
int gained=0, hold;

int solve(int cebottles, int leftover)
{
	if(cebottles+leftover<needed) return gained;
	else
	{
		cebottles+=leftover;
		hold = cebottles/needed;
		gained+=hold;
		solve(hold, cebottles%needed);
	}
}

int main()
{
	int testcases;
	std::cin>>testcases;
	for(int i=0; i<testcases; ++i)
	{
		gained=0;
		std::cin>>ebottles>>ebottles1>>needed;
		if(needed!=1) std::cout<<solve(ebottles+ebottles1, 0)<<std::endl;
		else std::cout<<"0"<<std::endl;
	}
	return 0;
}