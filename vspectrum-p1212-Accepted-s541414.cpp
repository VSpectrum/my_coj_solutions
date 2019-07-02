#include <iostream>
#include <string>
#include <map>
int main()
{
	std::map<char,int> musictime;
	musictime['W']=64;
	musictime['H']=32;
	musictime['Q']=16;
	musictime['E']=8;
	musictime['S']=4;
	musictime['T']=2;
	musictime['X']=1;
	std::string input = "";
	while(std::cin>>input && input!="*")
	{
		int validset = 0;
		for(int i=1; i<input.length(); ++i)
		{
			int sumup = 0;
			bool correct = true;

			while(input[i]!='/')
			{
				if(sumup > 64)
				{
					correct = false;
					while(input[i]!='/') ++i;
					break;
				}
				sumup += musictime[input[i]];
				++i;
			}
			
			if(correct && sumup==64) ++validset;
		}
		std::cout<<validset<<std::endl;
	}
	return 0;
}