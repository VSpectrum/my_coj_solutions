#include <iostream>
#include <string>
int main()
{
	std::string input;
	std::cin>>input;
	unsigned int sum = 0;
	for(int i=0; i<input.length(); ++i) sum+=(input[i]-'A'+1);
	std::cout<<sum<<std::endl;
	return 0;
}