#include <iostream>
#include <string>
int main()
{
	long long N = 0;
	long long input;
	std::string op;
	while(std::cin>>op>>input)
	{
		if(op=="suma") N+=input;
		else N-=input;
	}
	std::cout<<"resultado: "<<N<<std::endl;
	return 0;
}