// PhoenixColn-Assignment3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <conio.h>
# include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    // INPUT
    
    // Declares the Number variable 
    float Number;
    // Prompts the user for input
    cout << "Enter a Number: ";
    // Gets the input from the user
    cin >> Number;
    // Computes the area of a square using the number as it's side
    float AreaSquare = Number * Number;
    // Computes the area of a circle using the number as it's radius and 3.14 as pi
    float AreaCircle = (Number * Number) * 3.14;
    // Option Code for AreaCircle since Number squared is already stored in AreaSquare
    //float AreaCircle = 3.14 * AreaSquare; 

    // OUTPUT

    // Outputs to the user what the table is
    cout << "The areas of the shapes are:" << endl;
    // Outputs the first header row
    cout << setw(10) << setfill(' ') << left << "Shape" << setw(10) << setfill(' ') << right << "Area" << endl;
    // Outputes the second row using the tables format for column 1 and 2
    cout << setw(10) << setfill(' ') << left << "Square" << fixed << setw(10) << right << setprecision(2) << setfill('_') << AreaSquare << endl;
    // Outputes the third row using the tables format for column 1 and 2
    cout << setw(10) << setfill(' ') << left << "Circle" << fixed << setw(10) << right << setprecision(2) << setfill('_') << AreaCircle << endl;

    // Prevent the console from closing

    // Prompt user to press any key
    cout << "\n\nPress any key to continue...";

    // Wait for a character
    _getch();

    return 0;
}
