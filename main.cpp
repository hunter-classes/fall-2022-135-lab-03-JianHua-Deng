// add your code as appropriate 
#include <iostream>
#include "reservoir.h"
#include "reverseorder.h"

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
	
	//test cases for compare_basins, however I couldn't find cases for both basin being equals
	//West
	std::cout << std::endl;
	std::cout << "The one that consists of the highest basin is " << compare_basins("09/13/2018") << std::endl;
	std::cout << "The one that consists of the highest basin is " << compare_basins("09/14/2018") << std::endl;

	//East
	std::cout << "The one that consists of the highest basin is " << compare_basins("01/11/2018") << std::endl;
	std::cout << "The one that consists of the highest basin is " << compare_basins("01/10/2018") << std::endl;
	
	//test cases for reverse_order
	std::cout << std::endl;
	reverse_order("05/29/2018", "06/02/2018");

	return 0;
}//end main
