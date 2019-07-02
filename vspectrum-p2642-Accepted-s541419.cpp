#include <iostream>
#include <string>

int main()
{
	int testcases;
	std::string input;
	std::cin>>testcases;
	while(testcases!=0)
	{
		int ones = 0;
		std::cin>>input;
		for(int i=0; i<input.length(); i+=2)
			if(input[i]=='1') ++ones;
		for(int i=1; i<input.length(); i+=2)
			if(input[i]=='1') --ones;
		if(ones%3==0) std::cout<<"YES"<<std::endl;
		else std::cout<<"NO"<<std::endl;
		--testcases;
	}
	return 0;
}