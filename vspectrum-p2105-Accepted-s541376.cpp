#include <iostream>
#include <cstdio>
bool pic[1002][1002] = {0};
int countcoast = 0;

int findwater(int i, int j)
{
	if(!pic[i-1][j]) ++countcoast;
	else if(!pic[i][j-1]) ++countcoast;
	else if(!pic[i+1][j]) ++countcoast;
	else if(!pic[i][j+1]) ++countcoast;
}

int main()
{
	int h,w;
	char inp;
	std::cin>>h>>w;
	for(int i=0; i<h; ++i)
	{
		getchar(); //filters out \n
		for(int j=0; j<w; ++j)
		{
			inp = getchar();
			if(inp=='+') pic[i][j]=1;
		}
	}
	
	for(int i=0; i<h; ++i)
		for(int j=0; j<w; ++j)
			if(pic[i][j])
				findwater(i,j);
				
	std::cout<<countcoast<<std::endl;
	return 0;
}