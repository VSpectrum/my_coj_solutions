#include <iostream>
#include <string>

int fact(int f)
{
	int answer = 1;
	for(int i=2; i<=f; ++i) answer*=i;
	return answer;
}

int main()
{
	std::string input;
	while(1)
	{
		std::cin>>input;
		if(input=="0") return 0;
		int sumup = 0;
		for(int i=1, j=input.length()-1; j>=0; --j,++i)
			sumup+= (input[j]-'0')*fact(i);
		std::cout<<sumup<<std::endl;
	}
	return 0;
}