#include <iostream>
#include <string>
#include <map>
#include <cstdio>
std::string genconverse(std::string convertthis)
{
	for(int i=0; i<convertthis.length(); ++i)
	{
		if(convertthis[i]=='1') convertthis[i]='0';
		else convertthis[i] = '1';
	}
	return convertthis;
}

int main()
{
	std::map<std::string, bool> dnabits;
	int friends=0, marriages=0;
	int inpnum;
	std::cin>>inpnum;

	std::string input;
	std::string con;
	for(int i=0; i<inpnum; ++i)
	{
		getchar();
		bool gender = getchar()-'0';
		std::cin>>input;
		con = genconverse(input);
		std::map<std::string, bool>::iterator it = dnabits.find(con);
		if(it==dnabits.end()) dnabits[input]=gender;
		else
		{
			if(gender==(it->second)) ++friends;
			else ++marriages;
		}
	}
	std::cout<<friends<<" "<<marriages<<std::endl;
	return 0;
}