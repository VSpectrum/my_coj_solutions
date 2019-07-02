#include <iostream>

int main()
{
	unsigned long long diagonals;
	unsigned long long vertices;
	std::cin>>diagonals>>vertices;
	if(diagonals==(vertices*(vertices-3))/2) std::cout<<"yes"<<std::endl;
	else std::cout<<"no"<<std::endl;
	return 0;
}