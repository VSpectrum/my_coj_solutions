#include <iostream>
#include <string>

int main()
{
	std::string input;
	std::string output = "";
	std::cin >> input;
	int mid = (input.length()/2);
	for(int i=mid-1; i>=0; --i) output += input[i];

	if(input.length()%2==1)
	{
		output += input[mid];
		++mid;
	}
	
	for(int i=input.length()-1; i>=mid; --i) output+=input[i];
	
	std::cout<<output<<std::endl;
	return 0;
}