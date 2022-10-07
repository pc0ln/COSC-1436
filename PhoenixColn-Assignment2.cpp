//Author: Phoenix Coln
//Program: This program calculates the area of the square
//Input: A number
//Output: The area of the square

#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
	//INPUT

	// Declare the variable
	float Number;
	// Prompt the user for input
	cout << "Enter a Number: ";
	// Get the input from user
	cin >> Number;

	// COMPUTE the area of the square
	float AreaSquare = Number * Number;

	//OUTPUT the area of the square
	cout << "\nArea of the square is: " << AreaSquare << endl;

	// Prevent the console from closing
	
	//Prompt user to press any key
	cout << "\n\nPress any key to continue...";

	//Wait for a character
	_getch();

	return 0;
}