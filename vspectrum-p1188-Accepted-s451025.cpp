#include <iostream>
#include <string>
int main()
{
	std::string a;
	std::string b;
	std::cin>>a>>b;
	unsigned int sumb = 0;
	for(int i=0; i<b.length(); ++i) sumb+=b[i]-'0';
	unsigned int suma =0;
	for(int i=0; i<a.length(); ++i) suma+=(a[i]-'0');
	std::cout<<suma*sumb<<std::endl;
}