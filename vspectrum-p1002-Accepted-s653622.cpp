#include <iostream>
#include <cstring>
#include <cstdio>
bool landarea[1000][1000];

bool checksquare(int x, int y, int length)
{
	for(int row=y; row<y+length; ++row)
		for(int col=x; col<x+length; ++col)
			if(!landarea[row][col]) return false;
	return true;
}

int largestsquare(int length)
{
	int maxlength = length;
	while(length>0)
	{
		for(int row=0; row+length<=maxlength; ++row )
		{
			for(int col=0; col+length<=maxlength; ++col)
				if(checksquare(col, row, length)) return length;
		}
		--length;
	}
	return 0;
}

int main()
{
	int testcases, length, area;
	std::cin>>testcases;
	
	while(testcases > 0)
	{
		memset(&landarea[0], 0, sizeof(landarea));
		std::cin>>length;
		getchar();
		area = length*length;
		
		char isfree;
		int row = 0, col = 0;
		
		while(row < length)
		{
			if(col == length)
			{
				col=0; ++row; 
				if(row!=length)getchar();
			}
			isfree = getchar();
			if(isfree == '.') landarea[row][col] = 1;
			++col;
		}
		std::cout<<largestsquare(length)<<std::endl;
		--testcases;
	}
	return 0;
}