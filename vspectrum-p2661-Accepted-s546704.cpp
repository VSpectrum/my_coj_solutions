#include <iostream>
#include <string>
int main()
{
	std::string input;
	unsigned long long n;
	while(std::cin>>input)
	{
		for(unsigned long long i = 0; i<input.length(); ++i) n+=(input[i]-'0');
		if( (n % 3) == 0 ) std::cout<<"1"<<std::endl;
		else if( ((n-1) % 3) == 0) std::cout<<"7"<<std::endl;
		else if( ((n-2) % 3) == 0) std::cout<<"4"<<std::endl;
		n=0;
	}
	return 0;
}