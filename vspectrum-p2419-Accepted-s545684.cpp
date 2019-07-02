#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
int main()
{
	int testcases;
	std::cin>>testcases;
	std::vector<std::string> list;
	std::string listinp;
	while(testcases!=0)
	{
		std::string output = "";
		int numinp;
		std::cin>>numinp;
		for(int i=0; i<numinp; ++i)
		{
			std::cin>>listinp;
			for(int i=listinp.length(); i<21; ++i) listinp.push_back('~');
			list.push_back(listinp);
		}

		while(list.size()>0)
		{
			std::sort(list.begin(), list.end());
			if(list[0][0]=='~') break;
			output+=list[0][0];
			(list[0]).erase(list[0].begin());
			if(list[0]=="") list.erase(list.begin());
		}
		
		std::cout<<output<<std::endl;
		list.clear();
		--testcases;
	}
	return 0;
}