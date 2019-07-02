#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
	std::vector<int> scores;
	int nmatches, stockgoals;
	int team1, team2;
	int wins=0, draws=0;
	std::cin>>nmatches>>stockgoals;
	for(int i=0; i<nmatches; ++i)
	{
		std::cin>>team1>>team2;
		if(team1>team2) ++wins;
		else scores.push_back(team2-team1);
	}
	std::sort(scores.begin(), scores.end());
	for(int i=0; i<scores.size() ; ++i)
	{
		if(stockgoals > scores[i])
		{
			++wins;
			stockgoals = stockgoals - (scores[i]+1);
		}
		else if(stockgoals == scores[i])
		{
			++draws;
			stockgoals -= scores[i];
		}
		else stockgoals=0;
	}
	std::cout<<(wins*3)+draws<<std::endl;
	return 0;
}