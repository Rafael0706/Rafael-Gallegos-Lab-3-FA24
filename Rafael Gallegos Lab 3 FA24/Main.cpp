/*
Rafael Gallegos Cespedes
Computer Science Fall 2024
Due: Sep. 3, 2024
Lab 3 User and File I/O
This lab is a basic demo of the C++ language.
*/

#include <iostream>
#include <string>
#include "StatsCalc.h"
#include "fstream"

int getInput(std::string nubName);
void printNumber(int number);

int main()
{
	/*std::cout << "We need four numbers from you." << std::endl;

	int number1 = getInput("first");
	int number2 = getInput("second");
	int number3 = getInput("third");
	int number4 = getInput("fourth");

	printNumber(number1);
	printNumber(number2);
	printNumber(number3);
	printNumber(number4);*/

	std::ifstream inFile;				// Declare an input file stream (simular to cin)
	inFile.open("inMeanStd.dat");			// Open file for reading called input.dat
	int number1, number2, number3, number4;
	inFile >> number1 >> number2 >> number3 >> number4;	// Read from the file
	inFile.close();						// Close the file

	StatsCalc statsCalc;
	float mean = statsCalc.mean(number1, number2, number3, number4);
	std::cout << "The mean of the numbers is: " << mean << std::endl;
	float Std = statsCalc.std(number1, number2, number3, number4); 
	std::cout << "The mean of the numbers is: " << Std << std::endl;
	// file I/O
	std::ofstream outFile;				// Declare an output file stream (simular to cout)
	outFile.open("output.dat");		// Open file for writing called output.dat
	outFile << "The mean of the numbers is: " << mean << std::endl;	// Write to the file
	outFile << "The standard deviation of the numbers is: " << Std << std::endl;	// Write to the file
	outFile.close();					// Close the file

	return 0;
}

int getInput(std::string nubName)
{
	std::cout << "Please enter the " << nubName << " number: ";
	int input;
	std::cin >> input;
	return input;
}

void printNumber(int number)
{
	std::cout << "You entered: " << number << std::endl;
}
