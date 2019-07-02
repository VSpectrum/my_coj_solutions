#include <iostream>
#include <stdlib.h>
int main()
{
	unsigned long long ans[15000] = {0};
	unsigned int N,P;
	std::cin>>N>>P;
	unsigned int lengthans=0;
	for(unsigned int Na=N; Na>0; ++lengthans, Na/=10) ans[lengthans]=Na%10;
	for(int a=1; a<P; ++a)
	{
		for(int i=0; i<lengthans; ++i) ans[i]*=N;
		for(int i=0; i<lengthans; ++i)
		{
			if(i==lengthans-1 && ans[i]>9) ++lengthans;
			ans[i+1]+=ans[i]/10;
			ans[i]=ans[i]%10;
		}
 	}
	for(int i=lengthans-1, a=1; i>=0; --i, ++a)
	{
		std::cout<<ans[i];
		if(a%70==0) std::cout<<std::endl;
	}
	return 0;
}