// add your code as appropriate 
#include <iostream>
#include "reservoir.h"

int main()
{
	//test cases for get_east_storage
	std::cout << std::endl;
	std::cout << "East basin storage: " << get_east_storage("05/20/2018") << " billion gallons " << std::endl;
	
	//test cases for get_min_east
	std::cout << std::endl;
	std::cout << "Minimum East basin storage: " << get_min_east() << " billion gallons " << std::endl;
	
	//test cases for get_max_east
	std::cout << "Maximum East basin storage: " << get_max_east() << " billion gallons " << std::endl;
	
	//test cases for compare_basins, however there aren't cases for East being greater or both being equal.
	//Due to the reason that most data shows west has the highest basin
	std::cout << std::endl;
	std::cout << "The one that consists of the highest basin is " << compare_basins("09/13/2018") << std::endl;
	std::cout << "The one that consists of the highest basin is " << compare_basins("09/14/2018") << std::endl;
	std::cout << "The one that consists of the highest basin is " << compare_basins("09/15/2018") << std::endl;
	std::cout << "The one that consists of the highest basin is " << compare_basins("09/16/2018") << std::endl;
	std::cout << "The one that consists of the highest basin is " << compare_basins("09/17/2018") << std::endl;


	return 0;
}//end main
