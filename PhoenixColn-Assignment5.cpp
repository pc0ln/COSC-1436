// PhoenixColn-Assignment5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
#include <fstream>
#include <iomanip>
#include<string>
using namespace std;

int main()
{
    // Open File
    fstream inFile("Assignment5Data.txt");
    
    // Checks if the file is valid
    if (!inFile) {
        cout << "\n\nCan't open the file!";
        return 1;
    };
    

    // Initialize the variables
    string Name;
    float Tests, Assignments, TotalPoints, NumericGrade;
    char LetterGrade;
    int NumberStudents = 0;
    float AverageNumericGrade = 0;


    // Output the students statistics and header row for the table
    cout << "STUDENTS STATISTICS: \n"
        << setw(7) << left << "NAME"
        << setw(8) << left << " TESTS"
        << setw(14) << left << " ASSIGNMENTS"
        << setw(15) << left << " TOTAL POINTS"
        << setw(16) << left << " NUMERIC GRADE"
        << setw(15) << left << " LETTER GRADE"
        << endl;

    // Loop through the file
    while (inFile) {
        // Reads name from file
        inFile >> Name;

        // If the line is the end of the file it breaks the loops
        if (inFile.eof())
            break;

        // Reads tests from the file
        inFile >> Tests;
        // Reads assignments from the file
        inFile >> Assignments;

        // Computes the total poitns
        TotalPoints = Tests + Assignments;
        // Computes the numeric grade/ average
        NumericGrade = TotalPoints/2;

        // Determines the letter grade using the ternary operator

        // Checks if the grade is an 'A'
        LetterGrade = (NumericGrade >= 89.5) ? 'A' :
        // Checks if the grade is an 'B'
            (NumericGrade >= 79.5) ? 'B' :
        // Checks if the grade is an 'C'
            (NumericGrade >= 69.5) ? 'C' :
        // Checks if the grade is an 'D' or 'F'
            (NumericGrade >= 59.5) ? 'D' : 'F';

        // Computes the class statistics
        // Adds the averages of the students together
        AverageNumericGrade += NumericGrade;
        // Counts how many students
        NumberStudents++;

        // Output the row with student data
        cout << setw(7) << left << Name
            << setw(8) << right << Tests
            << setw(14) << right << Assignments
            << setw(15) << right << TotalPoints
            << setw(16) << right << NumericGrade
            << " " << setw(15) << left << LetterGrade
            << endl;

    };

    // Gets the average of the numeric grade after all the students are counted
    AverageNumericGrade /= NumberStudents;

    // Output the class statistics and header row for the tables
    cout << "\n\nCLASS STATISTICS: \n"
        << setw(13) << "STATISTIC"
        << setw(10) << "VALUE" << endl;
    // Output the rows of the table using class data
    cout << setw(13) << "NUMBER" << setw(10) << right << NumberStudents << "\n"
        << setw(13) << left << "AVERAGE" << setw(10) << right << fixed << setprecision(2) << AverageNumericGrade << endl;



    // Prevent the console from closing

    // Prompt user to press any key
    cout << "\n\nPress any key to continue...";

    // Wait for a character
    _getch();

    return 0;
}


