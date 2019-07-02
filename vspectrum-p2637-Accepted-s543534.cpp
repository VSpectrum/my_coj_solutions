#include <iostream>
#include <cstdio>
int main()
{
	unsigned long long sumarr[100002];
	unsigned int testcases,n,q,inp1,inp2;
	std::cin>>testcases;
	while(testcases!=0)
	{
		getchar();
		std::cin>>n>>q;
		unsigned long long sum=0, inp;
		for(int i=0; i<n; ++i)
		{
			std::cin>>inp;
			sum+=inp;
			sumarr[i]=sum;
		}
		for(int i=0; i<q; ++i)
		{
			std::cin>>inp1>>inp2;
			if(inp1 == 0 ) std::cout<<sumarr[inp2]<<std::endl;
			else if(inp2 == 0 ) std::cout<<sumarr[inp1]<<std::endl;
			else if(inp2>=inp1) std::cout<<sumarr[inp2]-sumarr[inp1-1]<<std::endl;
			else std::cout<<sumarr[inp1]-sumarr[inp2-1]<<std::endl;
		}
		if(testcases!=1) std::cout<<std::endl;
		--testcases;
	}
	return 0;
}