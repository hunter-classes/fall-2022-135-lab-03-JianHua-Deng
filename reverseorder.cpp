#include "reverseorder.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <climits>

void reverse_order(std::string date1, std::string date2) {

	//Copied and pasted previous code of reading tsv file
	//read tsv file, declaring fin as the input file stream object
	std::ifstream fin("Current_Reservoir_Levels.tsv");

	//Conditions for failing to read the tsv file
	if (fin.fail()) {
		std::cerr << "File Cannot be opened for reading." << std::endl;
		exit(1);
	}//end condition

	std::string junk, date;
	getline(fin, junk);//read the first line within tsv file as the first line will only has headers

	double eastSt, eastEl, westSt, westEl, smallest;
	bool start = false;

	std::vector<std::string> dates;
	std::vector<double> values;

	//Loop through by the headings
	while (fin >> date >> eastSt >> eastEl >> westSt >> westEl) {

		fin.ignore(INT_MAX, '\n');//skips to the end of line, ignoring the remaining columns 

		//This condition is to locate when the file reads up to the desired date1
		if (date1.compare(date) == 0) {
			start = true;
		}//end condition

		//Once pointer is at date1, start adding dates and value into the vector
		if (start) {
			dates.push_back(date);
			values.push_back(westEl);
		}//end condition

		//Once pointer reaches date2, stop adding to the vector
		if (date2.compare(date) == 0) {
			start = false;
		}//end condition

		

	}//end of while loop

	fin.close();

	//printing vector in reverse
	for (int i = dates.size() - 1; i >= 0; i--) {
		std::cout << "Date: " << dates.at(i) << "        " << values.at(i) << " ft" << std::endl;
	}//end for loop


}//end reverse_order