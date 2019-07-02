#include <iostream>
#include <cmath>
#include <string>
int main()
{
	std::string hold;
	int N,K,iElo,totaliElo = 0;
	double elodiff[2];
	std::cin>>hold;
	std::cout<<"Tournament: "<<hold<<std::endl;
	std::cin>>N;
	std::cout<<"Number of players: "<<N<<std::endl;
	std::cout<<"New ratings:"<<std::endl;
	for(int i=0; i<N; ++i)
	{
		std::cin>>hold>>iElo>>elodiff[0]>>elodiff[1]>>K;
		totaliElo += iElo;
		std::cout<<hold<<" "<<round(iElo+(K*(elodiff[0]-elodiff[1])))<<std::endl;
	}
	double average = (double)totaliElo/N;
	std::cout<<"Media Elo: "<<round(average)<<std::endl;
	return 0;
}