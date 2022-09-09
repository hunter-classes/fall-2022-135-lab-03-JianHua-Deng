// add your code
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include "reservoir.h"

//---------------------------------------------------------------------------------

double get_east_storage(std::string inputDate) {

	//read tsv file, declaring fin as the input file stream object
	std::ifstream fin("Current_Reservoir_Levels.tsv");

	//Conditions for failing to read the tsv file
	if (fin.fail()) {
		std::cerr << "File Cannot be opened for reading." << std::endl;
		exit(1);
	}//end condition

	std::string junk;
	getline(fin, junk);//read the first line within tsv file as the first line will only has headers

	std::string date;
	double eastSt, eastEl, westSt, westEl, targetValue;

	//Loop through by the headings
	while (fin >> date >> eastSt >> eastEl >> westSt >> westEl) {

		fin.ignore(INT_MAX, '\n');

		//if the parameter's date equals date in fin
		if (inputDate.compare(date) == 0){
			targetValue = eastSt;
		}//end condition
		

	}//end of while loop

	fin.close();

	return targetValue;

}//end get_east_storage function

//---------------------------------------------------------------------------------

double get_min_east() {
	
	//Copied and pasted previous code of reading tsv file
	//read tsv file, declaring fin as the input file stream object
	std::ifstream fin("Current_Reservoir_Levels.tsv");

	//Conditions for failing to read the tsv file
	if (fin.fail()) {
		std::cerr << "File Cannot be opened for reading." << std::endl;
		exit(1);
	}//end condition

	std::string junk;
	getline(fin, junk);//read the first line within tsv file as the first line will only has headers

	std::string date;
	double eastSt, eastEl, westSt, westEl, smallest;
	bool secondLine = true;

	//Loop through by the headings
	while (fin >> date >> eastSt >> eastEl >> westSt >> westEl) {

		fin.ignore(INT_MAX, '\n');

		//This checks if it's iterating the first loop, if so, set samllest to the first value so it could move on to the next loop and compare to the next number.
		if (secondLine) {
			smallest = eastSt;
			secondLine = false;
		}//end condition

		//Comparing numbers
		if (smallest > eastSt && !secondLine) {
			smallest = eastSt;
		}//end condition


	}//end of while loop

	fin.close();

	return smallest;

}//end get)min_east function


//---------------------------------------------------------------------------------


double get_max_east() {
	
	//Copied and pasted previous code of reading tsv file
	//read tsv file, declaring fin as the input file stream object
	std::ifstream fin("Current_Reservoir_Levels.tsv");

	//Conditions for failing to read the tsv file
	if (fin.fail()) {
		std::cerr << "File Cannot be opened for reading." << std::endl;
		exit(1);
	}//end condition

	std::string junk;
	getline(fin, junk);//read the first line within tsv file as the first line will only has headers

	std::string date;
	double eastSt, eastEl, westSt, westEl, largest;
	bool secondLine = true;

	//Loop through by the headings
	while (fin >> date >> eastSt >> eastEl >> westSt >> westEl) {

		fin.ignore(INT_MAX, '\n');

		//This checks if it's iterating the first loop, if so, set samllest to the first value so it could move on to the next loop and compare to the next number.
		if (secondLine) {
			largest = eastSt;
			secondLine = false;
		}//end condition

		//compare numbers
		if (largest < eastSt && !secondLine) {
			largest = eastSt;
		}//end condition
	
	}//end while loop

	return largest;
}//end get_max_east function