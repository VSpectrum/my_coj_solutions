#include <iostream>
#include <string>

int makeint(std::string turn_into_int)
{
        int result = 0; //change to long long if you need a few extra digits
        bool checkifnumb = true;

        int counter = 0;
        if(turn_into_int[0]=='-' || turn_into_int[0]=='+') ++counter;

        for( ; counter<turn_into_int.length(); ++counter)
                if(turn_into_int[counter]<'0' || turn_into_int[counter]>'9')
                        checkifnumb = false;

        if(checkifnumb)
        {
                int decidig=1;
                for( int a=turn_into_int.size()-1; a>=1; --a, decidig*=10)
                        result += (int(turn_into_int[a])-'0')*decidig;
                if(turn_into_int[0]=='-') return -result;
                else if(turn_into_int[0]=='+') return result;
                else return (result+(turn_into_int[0]-'0')*decidig);
        }
        else return 0;
}

int main()
{
	std::string A,Ah, B,Bh;
	std::cin>>A>>B;
	Ah=A;
	Bh=B;
	for(int i=0; i<A.length(); ++i)
	{
		if(A[i]=='5') Ah[i]='6';
		else if(A[i]=='6') A[i]='5';
	}
  
	for(int i=0; i<B.length(); ++i)
	{
		if(B[i]=='5') Bh[i]='6';
		else if(B[i]=='6') B[i]='5';
	}
	std::cout<<makeint(A)+makeint(B)<<" "<<makeint(Ah)+makeint(Bh)<<std::endl;
	return 0;
}