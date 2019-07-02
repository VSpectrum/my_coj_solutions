#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdio>
bool primes[10000001];
short solutions[10000001];

void fillprimes()
{
	primes[0]=0; primes[1]=0;
	
	for(int i=4; i<10000001; i+=2) primes[i]=false;
	
	for(int i=3; i<sqrt(10000001); i+=2)
		for(int j=i+i; j<10000001; j+=i)
			primes[j]=false;
	return;
}

bool isPal(int num)
{
	int n = num;
	int rev = 0;
	int dig;
 	while (num > 0)
 	{
   	dig = num % 10;
   	rev = rev * 10 + dig;
   	num = num / 10;
 	}
	if(n==rev)return true;
	else return false;
}

int main()
{
	memset(primes, 1, sizeof(primes));
	fillprimes();
	
	for(int i=3; i<10000001; i+=2)
	{
		if(!isPal(i)) primes[i]=false;
	}
	
	int counter = 0;
	for(int i=0; i<10000001; ++i)
	{
		if(primes[i]) ++counter;
		solutions[i]=counter;
	}
	
	int testcases, first, last;
	std::cin>>testcases;
	while(testcases>0)
	{
		std::cin>>first>>last;
		std::cout<<solutions[last]-solutions[first-1]<<std::endl;
		--testcases;
	}
	return 0;
}