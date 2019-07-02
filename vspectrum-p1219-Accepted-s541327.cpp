#include <iostream>
#include <algorithm>
#include <cstring>
int main()
{
	int job[10001];
	int testcases, bullets, numjobs, waste, totalmoney;
	std::cin>>testcases;
	while(testcases!=0)
	{
		memset(job, -1, sizeof(job));
		std::cin>>bullets>>numjobs;
		for(int i=0; i<numjobs; ++i)
			std::cin>>job[i]>>waste;

		std::sort( job, job+(sizeof(job)/sizeof(job[0])) );
		
		totalmoney = 0;
		for(int i=0, j=10000; i<bullets; ++i)
		{
			totalmoney+=job[j-i];
		}
		std::cout<<totalmoney<<std::endl;
		--testcases;
	}
}