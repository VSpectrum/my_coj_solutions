#include <iostream>
#include <string>

int main()
{
	std::string input;
	std::cin>>input;
	int upto;
	std::cin>>upto;
	int incr = 0;
	for(int i=0; i<input.length(); ++i)
	{
		if(input[i]=='.')
		{
			for(;upto>0; --upto) ++i;
			if(input[i+1]>='5')
			{
				for(int j=i; j>=0; --j)
				{
					if(input[j]=='.') continue;
					else if(input[j]=='9')
					{
						input[j]='0';
						if(j==0) input.insert(input.begin(), '1'), ++incr;
					}
					else
					{
						input[j]+=1;
						break;
					}
				}
			}
			input.resize(i+1+incr);
			break;
		}
	}
	std::cout<<input<<std::endl;
	return 0;
}