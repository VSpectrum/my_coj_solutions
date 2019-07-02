#include <iostream>

int solve(int M,int C,int counter)
{
	if(C<=M) return counter;
	else
	{
		if(C>=2*M)
		{
			if(C%2==1) solve(M,--C,++counter);
			else solve(M,C*0.5, ++counter);
		}
		else solve(M,--C,++counter);
	}
}

int main()
{
	int M,C;
	while(1)
	{
		std::cin>>M>>C;
		if(M==0 & C==0) return 0;
		else std::cout<<solve(M,C,0)<<std::endl;
	}
}