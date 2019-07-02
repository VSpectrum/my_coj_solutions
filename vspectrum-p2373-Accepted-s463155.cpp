#include <iostream>

int main()
{
	double soln[4];
	int A,B,C,D,maxhold=0,maxpos;
	std::cin>>A>>B>>C>>D;
	soln[0] = A/B + C/D;
	soln[1] = C/A + D/B;
	soln[2] = D/C + B/A;
	soln[3] = B/D + A/C;
	for(int a=0; a<4; ++a)
	{
		if(soln[a]>maxhold)
		{
			maxhold = soln[a];
			maxpos = a;
		}
	}
	std::cout<<maxpos<<std::endl;
}