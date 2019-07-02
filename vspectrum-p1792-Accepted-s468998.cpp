#include <iostream>
#include <string>
unsigned int Llose=0, Vlose=0;
bool Lwin[7] = {0,1,1,0,0,0,1};

int gcd(int a, int b)
{
    if (b==0) return a;
    else return gcd(b, a%b);
}
void compare(char L, char V)
{
	if(L==V) return;
 	if(Lwin[L-V+3]) ++Vlose;
	else ++Llose;
	return;
}

int main()
{
	unsigned int matches;
	std::string Lolek, Volek;
	std::cin>>matches>>Lolek>>Volek;
	unsigned int sizeline1 = Lolek.length(), sizeline2 = Volek.length();
	unsigned int upto = (sizeline1*sizeline2)/(gcd(sizeline1, sizeline2));
	
	if(matches>=upto)
	{
		std::string store = Lolek;
		while(Lolek.length()<upto) Lolek+=store;
		store = Volek;
		while(Volek.length()<upto) Volek+=store;
		
		for(unsigned int count=0; count<upto; ++count)
			compare(Lolek[count],Volek[count]);
	  		
		unsigned int skipped = matches/upto;
		unsigned int littlemore = matches%upto;
		Llose *= skipped, Vlose *= skipped;
		for(unsigned int count=0; count<littlemore; ++count)
	  		compare(Lolek[count],Volek[count]);
	}
	else
	{
		for(unsigned int line1=0, line2=0, count=0; count<matches; ++count,++line1, ++line2)
		{
			if(line1==sizeline1) line1=0;
			if(line2==sizeline2) line2=0;
	  		compare(Lolek[line1],Volek[line2]);
		}
	}
	std::cout<<Llose<<" "<<Vlose<<std::endl;
	return 0;
}