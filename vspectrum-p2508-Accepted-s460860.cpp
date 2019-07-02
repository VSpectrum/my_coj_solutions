#include <iostream>
#include <string>
int main()
{
	 std::string input;
	 std::cin>>input;
    int opened = 0;
    int solution = 0;
    for (int i=0; i<input.length(); ++i)
    {
        if(input[i] == '(') ++opened;
        else --opened;
		  //finds balance between ()  
        if(opened<0)
        {
            ++solution;
            opened += 2;
            // )) becomes () [1move add to solution] and add 2 to show balance
        }
    }
    solution += opened/2;
    std::cout<<solution<<std::endl;
    return 0;
}