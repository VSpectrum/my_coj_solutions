#include <iostream>
#include <vector>
#include <algorithm>

std::vector<unsigned long long> trianglenums;

bool trianglenumberGen(){
	unsigned long long trinum = 0;
	trianglenums.push_back(0);
	for(unsigned long long i=1; trinum < 2000000000000; i++){
		trinum = (i*i+i)/2;
		trianglenums.push_back(trinum);
	}
	return 1;
}

int main(){
	trianglenumberGen();
	unsigned long long num1, num2, count1=0, count2=0;
	
	while(1)
	{
		std::cin>>num1>>num2;
		if(num1==0 && num2==0) return 0;
		
		std::vector<unsigned long long>::iterator low,up;
		up=std::upper_bound (trianglenums.begin(), trianglenums.end(), num2); 
		low= std::lower_bound (trianglenums.begin(), trianglenums.end(), num1);
		
		std::cout<<(up - trianglenums.begin())-(low- trianglenums.begin())<<std::endl;
	}
}