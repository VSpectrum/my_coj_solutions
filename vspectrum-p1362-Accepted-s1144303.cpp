#include <iostream>
#include <algorithm>
int main()
{
	long long a,b,c, gcd;
	while(1)
	{
		std::cin>>a>>b>>c;
		if(a==0 && b==0 && c==0) return 0;
		else
		{
			gcd = std::__gcd(a,b);
			if (c%gcd==0) std::cout<<"YES"<<std::endl;
			else std::cout<<"NO"<<std::endl;
		}
	}
}
