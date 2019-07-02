#include <iostream>
int main()
{
	int testcases, numinp, oddcount, evencount, input;
	std::cin>>testcases;
	while(testcases!=0)
	{
		std::cin>>numinp;
		oddcount = 0, evencount = 0;
		for(int i=0; i<numinp; ++i)
		{
			std::cin>>input;
			if(input & 1) ++oddcount;
			else ++evencount;
		}
		std::cout<<evencount<<" even and "<<oddcount<<" odd."<<std::endl;
		--testcases;
	}
	return 0;
}