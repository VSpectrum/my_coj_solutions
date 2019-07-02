#include <string>
#include <map>
#include <iostream>
int main()
{
	std::map<int, std::string> penguins;
	int inpnum, id, idarr[101], incr = 0;
	std::string name;
	
	std::cin>>inpnum;
	while(inpnum!=0)
	{
		std::cin>>name;
		std::cin>>id;
		if(id<0) id=-id;
		idarr[incr]=id;
		if(penguins[id]!="") penguins[id]="somereallylongabsurdstring";
		else penguins[id]=name;
		--inpnum;
		++incr;
	}
	std::cout<<"FOREVER ALONE ones:"<<std::endl;
	for (int i=0 ; i < incr; ++i)
	{
		if( (penguins[idarr[i]]).size() < 11) std::cout<< (penguins[idarr[i]])<<std::endl ;
	}
	return 0;
}