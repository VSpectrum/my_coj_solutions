#include <iostream>
int main()
{
	int inp1,inp2,inp3;
	while(std::cin>>inp1>>inp2>>inp3)
	{
		int C=inp1;
		int A=C-inp2+((-C+inp3)*0.5);
		int B=-C-A+inp2;
		std::cout<<(9*A)+(3*B)+C<<" "<<(16*A)+(4*B)+C<<" "<<(25*A)+(5*B)+C<<std::endl;
	}
	return 0;
}