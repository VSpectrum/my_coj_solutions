#include <iostream>
int store[10][5]={0};
void gen()
{
	for(int a=1; a<10; ++a)
	{
		unsigned int stored=1;
		for(int b=1; b<5; ++b)
		{
			stored*=a;
			stored=stored%10;
			store[a][b]=stored;
		}
		for(int i=1; i<10; ++i)
			store[i][0]=store[i][4];
	}
}
int main()
{
	int a = 0;
	unsigned int b = 0;
	int repeatinp = 0;
	gen();
	std::cin>>repeatinp;
	for(int i=0; i<repeatinp; ++i)
	{
		std::cin>>a>>b;
		if(b==0)
		{
			std::cout<<"1\n";
			continue;
		}
		a=a%10;
		b=b%4;
		std::cout<<store[a][b]<<std::endl;
	}
	return 0;
}