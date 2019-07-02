#include <iostream>
int main()
{
	int testc;
	std::cin>>testc;
	for(int i=0; i<testc; ++i)
	{
		int A,N,sumup;
		sumup=0;
		std::cin>>A>>N;
		for(int a=1; a<=N-1; ++a) sumup+=a;
		sumup=sumup%N;
		A=A+sumup;
		if(A>N)A=A%N;
		std::cout<<A<<std::endl;
	}
	return 0;
}