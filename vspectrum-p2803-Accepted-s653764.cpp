#include <iostream>
#include <cstring>
#include <cstdio>
char map[12][12];

bool checkperfect(int length)
{
	for(int i=1; i<=length; ++i)
		for(int j=1; j<=length; ++j)
			if( map[i][j]==map[i-1][j] || map[i][j]==map[i+1][j] || map[i][j]==map[i][j-1] || map[i][j]==map[i][j+1]) return false;
	return true;
}

int main()
{
	int testcases, length;
	std::cin>>testcases;
	while(testcases>0)
	{
		memset(map, 0, sizeof(map));
		std::cin>>length;
		
		char buf;
		for(int i=1; i<=length; ++i)
			for(int j=0; j<=length; ++j)
			{
				buf = getchar();
				if(buf!='\0' || buf!='\n') map[i][j] = buf;
			}
		
		if(checkperfect(length)) std::cout<<"YES"<<std::endl;
		else std::cout<<"NO"<<std::endl;
		
		--testcases;
	}
	return 0;
}