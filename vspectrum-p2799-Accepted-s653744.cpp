#include <iostream>
#include <map>

int main()
{
	int a,b,c;
	std::cin>>a>>b>>c;
	if(a+b+c!=180) std::cout<<"Error"<<std::endl;
	else
	{
		std::map<int, bool> triangle;
		triangle[a]=1; triangle[b]=1; triangle[c]=1;
		if(triangle.size()==1) std::cout<<"Equilateral"<<std::endl;
		else if(triangle.size()==2) std::cout<<"Isosceles"<<std::endl;
		else std::cout<<"Scalene"<<std::endl;
	}
	return 0;
}