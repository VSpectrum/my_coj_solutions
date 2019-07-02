#include <iostream>
#include <map>
#include <cmath>
#include <string>
int main()
{
	std::map<int, int> maxtable;
	maxtable[0]=1;
	int length=1;
	for(int i=1; i<1001; ++i)
	{
		length += int(log10(i))+1;
		maxtable[length] = i;
	}
	std::string input;
	while(std::cin>>input)
	{
		int storepos;
		int count = 0;
		if(input.length()>3)
		{
			for(int i=0; i+3<input.length(); ++i)
				if(input[i]=='0' && input[i+1]=='1' && input[i+2]=='2' && input[i+3]=='3') storepos=i;
			for(int i=input.length()-4; i<input.length(); ++i)
				if(input[i]=='0' && input[(i+1)%input.length()]=='1' && input[(i+2)%input.length()]=='2' && input[(i+3)%input.length()]=='3') storepos=i;

			
			for(int i=storepos-1, j=maxtable[input.length()]; i>=0; i-=(int(log10(j))+1), --j)
				++count;
		}
		else
		{
			for(int i=0; i<input.length(); ++i)
				if(input[i]=='0')
				{
					count = i;
					break;
				}
		}
		std::cout<<count<<std::endl;
 	}
	return 0;
}