#include <iostream>
#include <string>

int main()
{
	std::string input;
	int testcases;
	std::cin>>testcases;
	int answer = testcases;
	while(testcases!=0)
	{
		std::cin>>input;
		for(int i=0; i<input.length()-1; ++i)
			if(input[i]=='C') if(input[i+1]=='D') --answer;
		--testcases;
	}
	std::cout<<answer<<std::endl;
	return 0;
}