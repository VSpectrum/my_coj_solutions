#include <iostream>
#include <string>
bool paln(int i, int base)
{
	std::string converted = "";
	int rem = 0;
	while(i!=0)
	{
		rem = i % base;
		converted+=(rem+'0');
		i/=base;
	}
	
	for(int i=0; i<converted.length()/2; ++i)
		if(converted[i]!=converted[converted.length()-i-1]) return false;
		
	return true;
}

int main()
{
	int a, b, count=0, finish=0;
	while(std::cin>>a>>b)
	{
		finish = 0;
		for(int i=b+1; finish<a ; ++i, count=0)
			for(int j=2; j<11; ++j)
			{
				count+=paln(i,j);
				if(count==2)
				{
					std::cout<<i<<std::endl;
					++finish;
					break;
				}
			}
	}
		
	return 0;
}