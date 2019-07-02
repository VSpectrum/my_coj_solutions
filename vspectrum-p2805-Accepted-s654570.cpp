#include <iostream>
#include <string>
std::string inp;
int cupholder=1;
int countcupholder()
{
	for(int i = 0; i<inp.length(); ++i)
	{
		if(inp[i]=='S') ++cupholder;
		else
		{
			++i;
			++cupholder;
		}
	}
	return cupholder;
}

int main()
{
	int seats;
	std::cin>>seats;
	std::cin>>inp;
	countcupholder();
	if(seats<cupholder) std::cout<<seats<<std::endl;
	else std::cout<<cupholder<<std::endl;
	return 0;
}