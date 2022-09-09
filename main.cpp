// add your code as appropriate 
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include "reservoir.h"

int main()
{

	std::cout << "East basin storage: " << get_east_storage("05/20/2018") << " billion gallons " << std::endl;
	std::cout << "Minimum East basin storage: " << get_min_east() << " billion gallons " << std::endl;
	std::cout << "Maximum East basin storage: " << get_max_east() << " billion gallons " << std::endl;
	return 0;
}//end main
