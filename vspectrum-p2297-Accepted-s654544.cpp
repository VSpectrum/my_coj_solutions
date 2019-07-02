#include <iostream>
#include <string>
int main()
{
	int testcases, maxwin;
	std::cin>>testcases;
	maxwin = testcases;
	while(testcases!=0)
	{
		std::string inp = "";
		std::cin>>inp;
		for(int i=0; i<inp.length()-1; ++i)
		{
			if(inp[i]=='C' && inp[i+1]=='D')
			{
				--maxwin;
				break;
			}
		}
		--testcases;
	}
	std::cout<<maxwin<<std::endl;
	return 0;	
}