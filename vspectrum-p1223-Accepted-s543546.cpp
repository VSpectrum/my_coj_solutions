#include <map>
#include <iostream>
#include <string>
std::map<std::string, std::string> trace;
int delcircle(std::string store, std::string follow)
{
	std::string hold = trace[follow];
	if(store==hold)
	{
		trace.erase(follow);
		return 0;
	}
	trace.erase(follow);
	delcircle(store, hold);
}

int main()
{
	int numppl = 1, casenum = 1;
	std::string name1,name2, check1, check2;
	
	std::map<std::string, std::string>::iterator it;
	while(numppl!=0)
	{
		int counter = 0;
		std::cin>>numppl;
		if(numppl==0) return 0;
		for(int i=0; i<numppl; ++i)
		{
			std::cin>>name1>>name2;
			trace[name1]=name2;
		}
		while(trace.size()>=2)
		{
			++counter;
			it=trace.begin();
			delcircle(it->first, it->first);
		}
		std::cout<<casenum<<" "<<counter<<std::endl;
		++casenum;
	}
	return 0;
}