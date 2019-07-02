#include <iostream>
#include <string>
#include <cmath>
int main()
{
	char arr[100][100];
	std::string input;
	int testcases;
	std::cin>>testcases;
	while(testcases!=0)
	{
		std::cin>>input;
		unsigned int makesq = sqrt(input.length());
		unsigned int k=0;
		for(int i=0; i<makesq; ++i)
			for(int j=0; j<makesq; ++j, ++k)
				arr[i][j]=input[k];
		for(int i=makesq-1; i>=0; --i)
			for(int j=0; j<makesq; ++j)
				std::cout<<arr[j][i];
		std::cout<<std::endl;
		--testcases;
	}
	return 0;
}