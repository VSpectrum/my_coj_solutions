#include <iostream>
int main()
{
	int testcases, input;
	std::cin>>testcases;
	while(testcases!=0)
	{
		std::cin>>input;
		for(int j=0; input!=0; ++j, input>>=1)
		{
			if(input==1) std::cout<<j<<std::endl;
			else if(input&1) std::cout<<j<<" ";
		}
		--testcases;
	}
	return 0;
}