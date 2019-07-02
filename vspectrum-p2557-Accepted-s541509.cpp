#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<unsigned int> hisarmy, myarmy;
	int numinp, strength;
	std::cin>>numinp;
	
	for(int i = 0; i<numinp; ++i)
	{
		std::cin>>strength;
		hisarmy.push_back(strength);
	}
	for(int i = 0; i<numinp; ++i)
	{
		std::cin>>strength;
		myarmy.push_back(strength);
	}
	std::sort(hisarmy.begin(), hisarmy.end());
	std::sort(myarmy.begin(), myarmy.end());

	int iwon=0;
	int i=0,j=0;
	for(; i<numinp; ++i)
	{
		for(; j<numinp; ++j)
		{
			if(hisarmy[i]<myarmy[j])
			{
				++iwon;
				++j;
				break;
			}
		}
	}
	std::cout<<iwon<<std::endl;
	return 0;
}