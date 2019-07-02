#include <bitset>
#include <iostream>
#include <string>
int main()
{
	int nums[13] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
	std::string RN[13] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
	std::string input;
	int testcases;
	std::cin>>testcases;
	while(testcases!=0)
	{
		std::string output = "";
		std::cin>>input;
		std::bitset<32> conv(input);
		unsigned long converted = conv.to_ulong();
		while(converted!=0)
			for(int i=0; i<13; ++i)
				if(converted >= nums[i])
				{
					converted-=nums[i];
					output+=RN[i];
					break;
				}
		std::cout<<output<<std::endl;
		--testcases;
	}
}