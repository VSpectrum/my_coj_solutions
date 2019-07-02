#include <iostream>

int main()
{
	int testcases;
	long long a,b,S;
	std::cin>>testcases;
	while(testcases!=0)
	{
		std::cin>>a>>b>>S;
		long long N = (S*2)/(a+b);
		std::cout<<N<<std::endl;
		
		long long firstterm = (((N-3)*a)-(2*b))/(N-5);
		long long secondterm = (firstterm+a)/2;
		long long difference = secondterm-firstterm;
		
		for(int i=firstterm; i!=(b+difference+difference); i+=difference)
		{
			std::cout<<i<<" ";
		}
		std::cout<<b+difference+difference<<std::endl;
		--testcases;
	}
}