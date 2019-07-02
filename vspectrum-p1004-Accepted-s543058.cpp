#include <iostream>
int main()
{
	int testcases,m,n;
	std::cin>>testcases;
	while(testcases!=0)
	{
		std::cin>>m>>n;
		if( (m&1) && (n&1) )
		{
			if(m<=n) std::cout<<"R"<<std::endl;
			else std::cout<<"D"<<std::endl;
		}
		else if( (m&1)==0 && (n&1)==0 )
		{
			if(m<=n) std::cout<<"L"<<std::endl;
			else std::cout<<"U"<<std::endl;
		}
			
		else if( (m&1) && (n&1)==0 )
		{
			if(m<n) std::cout<<"R"<<std::endl;
			else std::cout<<"U"<<std::endl;
		} 
		
		else if( (m&1)==0 && (n&1) )
		{
			if(m<n) std::cout<<"L"<<std::endl;
			else std::cout<<"D"<<std::endl;
		}
		
		--testcases;
	}
	return 0;
}