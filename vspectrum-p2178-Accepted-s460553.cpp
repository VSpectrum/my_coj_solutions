#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
	std::vector<int> flowers;
	int sumup = 0,petals,numflowers=0;
	std::cin>>numflowers;

	for(int i=0; i<numflowers; ++i)
	{
		std::cin>>petals;
		sumup+=petals;
		flowers.push_back(petals);
	}
	std::sort(flowers.begin(), flowers.end());
 	for(int i=0; sumup%2==0; ++i)
	{
		if(sumup==0)
		{
			std::cout<<"-1"<<std::endl;
			return 0;
		}
		sumup-=flowers[i];
	}
	std::cout<<sumup<<std::endl;
	return 0;
}