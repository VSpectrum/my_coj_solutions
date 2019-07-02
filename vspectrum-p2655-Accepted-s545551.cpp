#include <iostream>
#include <string>

int main()
{
	std::string input;
	std::string output = "";
	for(int testcases=1; testcases<6; ++testcases)
	{
		std::cin>>input;
		for(int i=0; i<input.length()-2; ++i)
		{
			if(input[i]=='F') if(input[i+1]=='B') if(input[i+2]=='I')
			{
				output+=testcases+'0';
				output+=" ";
				break;
			}
		}
	}
	if(output.length()>0)
	{
		output.erase(output.end()-1, output.end());
		std::cout<<output<<std::endl;
	}
	else std::cout<<"HE GOT AWAY!"<<std::endl;
	return 0;
}