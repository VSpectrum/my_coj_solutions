#include <iostream>
int main()
{
	int inp = 0;
	while(std::cin>>inp && inp!=42)
		std::cout<<inp<<std::endl;
	return 0;
}