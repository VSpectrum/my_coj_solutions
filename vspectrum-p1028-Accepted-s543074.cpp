#include <iostream>
#include <string>
int main()
{
	std::string inp1, inp2;
	while(std::cin>>inp1>>inp2)
	{
		int a=0, b=0;
		bool found;
		for(; a<inp1.length(); ++a)
		{
			found = false;
			for(; b<inp2.length(); ++b)
			{
				if(inp1[a]==inp2[b])
				{
					found = true;
					++b;
					break;
				}
			}
			if(!found) break;
		}
		if(found) std::cout<<"Yes"<<std::endl;
		else std::cout<<"No"<<std::endl;
	}
	return 0;
}