#include <iostream>
#include <algorithm>
int main()
{
	int citydays[51];
	int testcases, days, cities;
	std::cin>>testcases;
	while(testcases>0)
	{
		for(int i=0; i<51; ++i) citydays[i]=2137483646;
		std::cin>>days>>cities;
		for(int i=0; i<cities; ++i) std::cin>>citydays[i];
		std::sort(citydays, citydays+cities);
  		int sum = 0,count;
		for(count=0; sum<=days; ++count) sum+=citydays[count];
		--count;
		std::cout<<count<<std::endl;
		--testcases;
	}
	return 0;
}