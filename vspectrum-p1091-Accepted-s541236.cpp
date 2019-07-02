#include <iostream>
#include <cmath>
#include <iomanip>
double exp(double inp)
{
	 return pow(2.718281828, inp);
}
/*
temperature = humidex + (0.5555)*( (6.11 * exp(5417.7530 * ((1/273.16) - (1/(dewpoint+273.16))) ) ) - 10.0);
dewpoint = 1/(-( log((humidex-temperature + 5.555)/3.394105) / 5417.753 - 1/273.16)) - 273.16;
humidex = temperature + (0.5555)*( (6.11 * exp(5417.7530 * ((1/273.16) - (1/(dewpoint+273.16))) ) ) - 10.0);
*/
int main()
{
	double temperature, dewpoint, humidex;
	double out[3];
	bool inputted[3];
	char inp = 0;
	while(1)
	{
		for(int i=0; i<3; ++i) inputted[i]=0;

		for(int i=0; i<2; ++i)
		{
			std::cin>>inp;
			if(inp == 'E') return 0;
			else if(inp == 'T') std::cin>>out[0], inputted[0]=1;
			else if(inp == 'D') std::cin>>out[1], inputted[1]=1;
			else if(inp == 'H') std::cin>>out[2], inputted[2]=1;
		}

		if(!inputted[0]) out[0] = out[2] - (0.5555)*( (6.11 * exp( (5417.7530 * ((1/273.16)-(1/(out[1]+273.16)) ) ) ) ) - 10.0);
		else if(!inputted[1]) out[1] = 1/(-( log((out[2]-out[0] + 5.555)/3.394105) / 5417.753 - 1/273.16)) - 273.16;
		else out[2] = out[0] + (0.5555)*( (6.11 * exp(5417.7530 * ((1/273.16) - (1/(out[1]+273.16))) ) ) - 10.0);

		std::cout<<std::fixed<<std::setprecision(1)<<"T "<<out[0]<<" D "<<out[1]<<" H "<<out[2]<<std::endl;
	}
	return 0;
}
