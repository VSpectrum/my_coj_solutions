#include <iostream>
#include <string>

std::string fronttoback(std::string inp)
{
	inp.erase(inp.begin());
	if(inp[inp.length()-1]=='O') inp.push_back('I');
	else if(inp[inp.length()-1]=='I') inp.push_back('E');
	else inp.push_back('O');
	return inp;
}

int main()
{
	int i,j;
	std::cin>>i>>j;
	std::string wrapper = "OIE";
	while(wrapper.length()<j) wrapper+="OIE";
	wrapper.erase(wrapper.begin()+j, wrapper.end());
	for(int k=0; k<i; ++k)
	{
		std::cout<<wrapper<<std::endl;
		wrapper = fronttoback(wrapper);
	}
	return 0;
}