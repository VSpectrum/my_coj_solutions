#include <iostream>
#include <cmath>
#include <string>
#include <vector>
int main()
{
	std::string Tournament;
	long long N,K,iElo,totaliElo = 0;
	double elodiff[2];
	std::cin>>Tournament;
	std::cin>>N;
	std::vector<std::string> names;
	std::vector<int> scores;
	std::string hold;
	for(long long i=0; i<N; ++i)
	{
		std::cin>>hold>>iElo>>elodiff[0]>>elodiff[1]>>K;
		names.push_back(hold);
		totaliElo += iElo;
		scores.push_back(round(iElo+(K*elodiff[0]-K*elodiff[1])));
	}
	double average = (double)totaliElo/N;

	std::cout<<"Tournament: "<<Tournament<<std::endl;
	std::cout<<"Number of players: "<<N<<std::endl;
	std::cout<<"New ratings:"<<std::endl;
	for(int i=0; i<N; ++i)
		std::cout<<names[i]<<" "<<scores[i]<<std::endl;
	std::cout<<"Media Elo: "<<round(average)<<std::endl;
	return 0;
}