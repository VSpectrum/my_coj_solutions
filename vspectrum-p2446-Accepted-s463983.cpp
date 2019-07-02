#include <iostream>
#include <string>
#include <algorithm>
int main()
{
	std::string bianka, williams;
	std::cin>>bianka>>williams;
	std::sort(bianka.begin(),bianka.end());
	if(bianka=="BWW")
	{
		std::cout<<"Bianka won with Paper"<<std::endl;
		std::cout<<"Williams lost with Rock"<<std::endl;
		return 0;
	}
	else if(bianka=="BBW")
	{
		std::cout<<"Williams won with Scissors"<<std::endl;
		std::cout<<"Bianka lost with Paper"<<std::endl;
		return 0;
	}
	else if(bianka=="WWW")
	{
		std::cout<<"Williams won with Rock"<<std::endl;
		std::cout<<"Bianka lost with Scissors"<<std::endl;
		return 0;
	}
	else
	{
		std::cout<<"Bianka won with Rock"<<std::endl;
		std::cout<<"Williams lost with Scissors"<<std::endl;
		return 0;
	}
}