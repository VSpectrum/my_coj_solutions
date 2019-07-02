#include <iostream>
#include <string>
int main()
{
	int testcases;
	std::cin>>testcases;
	for(int i=0; i<testcases; ++i)
	{
		std::string input = "";
		int moves;
		std::cin>>input>>moves;
		for(int i=0; i<moves; ++i)
		{
			input.insert(input.begin(),input[input.length()-1]);
			input.erase(input.end()-1);
		}
		std::cout<<input<<std::endl;
	}
	return 0;
}