#include <iostream>
#include <vector>
std::vector<int> heaps;

int main()
{
	int testcases, numheaps;
	int input;
	std::cin>>testcases;
	for(int i=0;i<testcases;++i)
	{
		std::cin>>numheaps;
		for(int j=0;j<numheaps;++j)
		{
			std::cin>>input;
			heaps.push_back(input);
		}
		int max=0,maxat;
		for(int i=0; i<heaps.size(); ++i)
			if(max<heaps[i])
			{
				max=heaps[i];
				maxat=i;
			}
		heaps[maxat]=0;
		int effort=0;
		for(int i=0; i<heaps.size(); ++i)
			effort+=heaps[i];
		std::cout<<effort<<std::endl;
		heaps.clear();
	}
}