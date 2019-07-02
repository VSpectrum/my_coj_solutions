#include <iostream>
#include <string>
int main()
{
	int alpha[123] = {0};
	int numnames;
	std::string name;
	std::cin>>numnames;
	while(numnames!=0)
	{
		std::cin>>name;
		++alpha[(int)name[0]];
		--numnames;
	}
	std::string output;
	for(int i=97; i<123; ++i)
		if(alpha[i]>4) output+=(char)i;
	if(output=="") std::cout<<"PREDAJA"<<std::endl;
	else std::cout<<output<<std::endl;
	return 0;
}