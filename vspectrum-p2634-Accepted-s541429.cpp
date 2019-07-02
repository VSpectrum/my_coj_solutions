#include <iostream>
#include <string>
#include <cstdio>
int main()
{
	std::string ID, waste;
	int birthdaymonths[13] = {0};
	char filter, tens, ones;
	int testcases;
	std::cin>>testcases;
	while(testcases!=0)
	{
		filter = 0;
		std::cin>>ID;
		while(filter!='/') filter = getchar();
		tens = getchar();
		ones = getchar();
		if(ones == '/') ++birthdaymonths[tens-'0'];
		else ++birthdaymonths[10*(tens-'0') + (ones-'0')];
		std::cin>>waste;
		--testcases;
	}
	for(int i=1; i<13; ++i) std::cout<<i<<" "<<birthdaymonths[i]<<std::endl;
	return 0;
}