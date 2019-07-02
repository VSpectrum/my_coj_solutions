#include <iostream>
#include <string>
int main()
{
	std::string inp="";
	while(1)
	{
		std::cin>>inp;
		if(inp!="0")
		{
			unsigned int rowa = 0,rowb = 0;
			for(int a=0; a<inp.length(); a+=2) 	rowa+=inp[a]-'0';
			for(int a=1; a<inp.length(); a+=2)  rowb+=inp[a]-'0';
			if(!((rowa-rowb)%11)) std::cout<<inp<<" is a multiple of 11."<<std::endl;
			else std::cout<<inp<<" is not a multiple of 11."<<std::endl;
		}
		else return 0;
 	}
}