#include <iostream>

int main()
{
	int testcases;
	std::cin>>testcases;
	long long input , soln;
	for(int i=0; i<testcases; ++i)
	{
		std::cin>>input;
		soln = 1;
		for(int i=4, j=1; j<input; i+=4, ++j)
			soln+=i;
		std::cout<<soln<<std::endl;
	}
	return 0;
}