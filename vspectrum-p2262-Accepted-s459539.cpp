#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
	unsigned long long tasty,sumup=0;
	unsigned int courses,weights;
	std::vector<int> cweights;
	std::cin>>courses>>tasty;
	for(int i=0; i<courses; ++i)
	{
		std::cin>>weights;
		cweights.push_back(weights);
	}
	std::sort(cweights.begin(), cweights.end());
	for(int i=cweights.size()-1,count=0; i>=0; --i,++count)
	{
		sumup+=cweights[i];
		if(sumup>=tasty)
		{
			++count;
			std::cout<<count<<std::endl;
			return 0;
		}
	}
	std::cout<<"IMPOSSIBLE"<<std::endl;
	return 0;
}