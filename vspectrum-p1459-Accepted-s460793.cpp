#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
int main()
{
	std::vector<int> highplace;
	std::string input;
	std::cin>>input;
	char max = 0;
	for(int i=0; i<input.length(); ++i)
		max = std::max(input[i], max);
		
	for(int i=0; i<input.length(); ++i)
		if(input[i]==max)
			highplace.push_back(i);
	
	for(int i=1; i<input.length(); ++i)
	{
		if(highplace.size()<=2) break;
		char storemax=0;
		for(int j=0; j<highplace.size()-1; ++j)
			storemax=std::max(storemax, input[highplace[j]+i]);
		for(int j=0; j<highplace.size()-1; ++j)
			if(input[highplace[j]+i]<storemax)
			{
				highplace.erase(highplace.begin()+j);
				--j;
			}
	}
	for(int i=1; i<input.length()-1 && highplace.size()==2; ++i)
	{
		char from0 = input[highplace[0]+i];
		char from1 = input[(highplace[1]+i)%input.length()];
		char max = std::max(from0, from1);
		if(from1!=max) highplace.erase(highplace.begin()+1);
		else if(from0!=max) highplace.erase(highplace.begin());
	}
	std::cout<<highplace[0]<<std::endl;
	return 0;
}