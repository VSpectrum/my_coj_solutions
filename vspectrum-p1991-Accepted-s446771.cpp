#include <iostream>
#include <vector>
#include <string>
int main()
{
	std::vector<bool> input;
	int solution[8];
	int cases=0;
	std::cin>>cases;
	for(int a=0; a<cases; ++a)
	{
		for(int i=0; i<8; ++i) solution[i]=0;
		
		std::string rawinp;
		int b=0;
		std::cin>>b;
		std::cin>>rawinp;
		for(int d=0; d<rawinp.length(); ++d)
		{
			if(rawinp[d]=='H') input.push_back(true);
			else input.push_back(false);
		}

		for(int i=0; i<=input.size()-3; ++i)
		{
			if(input[i])
			{
				if(input[i+1])
	 			{
					if(input[i+2])	++solution[7];
					else ++solution[6];
				}
				else
				{
					if(input[i+2]) ++solution[5];
					else ++solution[4];
				}
			}
			
			else
			{
				if(input[i+1])
				{
					if(input[i+2]) ++solution[3];
					else ++solution[2];
				}
				else
				{
					if(input[i+2]) ++solution[1];
					else ++solution[0];
				}
			}
		}
		std::cout<<b<<" "<<solution[0]<<" "<<solution[1]<<" "<<solution[2]<<" "<<solution[3]<<" "<<solution[4]<<" "<<solution[5]<<" "<<solution[6]<<" "<<solution[7]<<std::endl;
		rawinp.erase (rawinp.begin(),rawinp.end());
		input.erase (input.begin(),input.end());
	}
	
}