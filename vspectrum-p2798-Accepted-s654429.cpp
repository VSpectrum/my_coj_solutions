#include <iostream>
unsigned long long nCk( unsigned n, unsigned k )
{
    if (k > n) return 0;
    if (k * 2 > n) k = n-k;
    if (k == 0) return 1;

    unsigned long long result = n;
    for( int i = 2; i <= k; ++i ) 
	 {
        result *= (n-i+1);
        result /= i;
    }
    return result;
}

int main()
{
	int testcases, tcase, length;
	std::cin>>testcases;
	while(testcases>0)
	{
		std::cin>>tcase>>length;
		std::cout<<tcase<<" "<<nCk(9+length, length)<<std::endl;
		--testcases;
	}
	return 0;
}