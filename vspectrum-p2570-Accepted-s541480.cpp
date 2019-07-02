#include <iostream>
int reverseint(int num_)
{
	int inv = 0;
	while (num_>0)
	{
		inv = inv * 10 + (num_%10);
		num_ = num_ / 10;
	}
	return inv;
}

int main()
{
	int input;
	while(std::cin>>input)
	{
		if(input<reverseint(input)) std::cout<<"YES"<<std::endl;
		else std::cout<<"NO"<<std::endl;
	}
	return 0;
}