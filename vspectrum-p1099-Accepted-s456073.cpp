#include <iostream>
#include <algorithm>
int main()
{
	unsigned int inp[3];
	while(std::cin>>inp[0]>>inp[1]>>inp[2])
	{
		unsigned int store = 0;
		unsigned int storepos;
		for(int i=0; i<3; ++i)
		{
			inp[i]*=inp[i];
			if(inp[i]>store)
			{
				store=inp[i];
				storepos=i;
			}
		}
		unsigned int others = 0;
		for(int i=0; i<3; ++i)
		{
			if(storepos==i) continue;
			else others+=inp[i];
		}
		if(others==store) std::cout<<"right"<<std::endl;
		else std::cout<<"wrong"<<std::endl;
	}
	return 0;
}