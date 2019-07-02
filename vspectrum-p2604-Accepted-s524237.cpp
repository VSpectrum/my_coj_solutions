#include <iostream>
#include <string>
#include <vector>
int convNum(char inp)
{
	if(inp=='.') return 1;
	else if(inp=='-') return 5;
	else if(inp==':') return 2;
	else if(inp=='=') return 10;
	else return 0;
}

int makenum(std::string inp)
{
	int numb = 0;
	for(int i=0; i<inp.length(); ++i) numb+=convNum(inp[i]);
	return numb;
}

int main()
{
	std::vector<int> operands;
	std::vector<int> operators;
	int numsig, count=0;
	std::cin>>numsig;
	std::string input;
	while(count < 1+numsig*2)
	{
		std::cin>>input;
		if(input!="+" && input!="*")
			operands.push_back(makenum(input));
		else
		{
			if(input=="+") operators.push_back(1);
			else if(input=="*") operators.push_back(2);
		}
		++count;
	}

	//for(int i=0; i<operands.size(); ++i) std::cout<<operands[i]<<" ";
	//std::cout<<std::endl;
	//for(int i=0; i<operators.size(); ++i) std::cout<<operators[i]<<" ";
	
	for(int i=0; i<operators.size(); ++i)
	{
		if(operators[i]==2)
		{
			operators.erase(operators.begin()+i);
			operands[i] = operands[i] * operands[i+1];
			operands.erase(operands.begin()+i+1);
			--i;
		}
	}
	
	int answer = 0;
	for(int i=0; i<operands.size(); ++i) answer += operands[i];
	std::cout<<answer<<std::endl;
	return 0;
}