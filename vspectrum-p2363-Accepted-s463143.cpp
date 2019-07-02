#include <iostream>
#include <string>

bool checksamenums(std::string inp)
{
	char store = inp[0];
	for(int i=0; i<inp.length(); ++i)
		if(inp[i]!=store) return false;
	return true;
}

int main()
{
	std::string input;
	std::cin>>input;
	if(input.length()==1) std::cout<<"0"<<std::endl;
	else if(checksamenums(input)) std::cout<<"0"<<std::endl;
	else
	{
		char store;
		for(int i=input.length()-2; i>=0; --i)
		{
			for(int j=input.length()-1; j>i; --j)
			{
				if(input[j]>input[i])
				{
					store = input[j];
					input[j] = input[i];
					input[i] = store;
					std::cout<<input<<std::endl;
					return 0;
				}
			}
		}
		std::cout<<"0"<<std::endl;
	}
	return 0;
}