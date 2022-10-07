// PhoenixColn-Assignment4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    // Declaring variables
    int SubjectNumber;
    string SubjectName;
    int RubericNumber;
    string RubericName;
    int CourseNumber;
    string CourseName;
    int SectionNumber;
    string SectionName;

    // Getting Subject

    // Displaying the options
    cout << "1 for Computer Science, 2 for Business Computer Applications, and 3 for Computer Information Technology\n";
    // Prompting user for input
    cout << "Select an option number: ";
    // Collecting user input
    cin >> SubjectNumber;

    // Determining the subject name by user input
    // If user input 1 set to option 1
    if (SubjectNumber == 1)
        SubjectName = "Computer Science";
    // If user input 2 set to option 2
    else if (SubjectNumber == 2)
        SubjectName = "Business Computer Applications";
    // If user input 3 set to option 3
    else if (SubjectNumber == 3)
        SubjectName = "Computer Information Technology";
    // User input was not an option
    else
        cout << "Invalid option.";

    // Getting Ruberic

    // Displaying the options
    cout << "1 for COSC, 2 for BCIS, 3 for ITSC, and 4 for ITSE\n";
    // Prompting user for input
    cout << "Select an option number: ";
    // Collecting user input
    cin >> RubericNumber;

    // Determining the ruberic name by user input
    // If user input 1 set to option 1
    if (RubericNumber == 1)
        RubericName = "COSC";
    // If user input 2 set to option 2
    else if (RubericNumber == 2)
        RubericName = "BCIS";
    // If user input 3 set to option 3
    else if (RubericNumber == 3)
        RubericName = "ITSC";
    // If user input 4 set to option 4
    else if (RubericNumber == 4)
        RubericName = "ITSE";
    // User input was not an option
    else
        cout << "Invalid option.";

    // Getting Course

    // Displaying the options
    cout << "1 for 1436, 2 for 1437, 3 for 2436, 4 for 1301, 5 for 1305, and 6 for 1405\n";
    // Prompting user for input
    cout << "Select an option number: ";
    // Collecting user input
    cin >> CourseNumber;

    // Determining the course name by user input
    // If user input 1 set to option 1
    if (CourseNumber == 1)
        CourseName = "1436";
    // If user input 2 set to option 2
    else if (CourseNumber == 2)
        CourseName = "1437";
    // If user input 3 set to option 3
    else if (CourseNumber == 3)
        CourseName = "2436";
    // If user input 4 set to option 4
    else if (CourseNumber == 4)
        CourseName = "1301";
    // If user input 5 set to option 5
    else if (CourseNumber == 5)
        CourseName = "1305";
    // If user input 6 set to option 6
    else if (CourseNumber == 6)
        CourseName = "1405";
    // User input was not an option
    else
        cout << "Invalid option.";

    // Getting Section

    // Displaying the options
    cout << "1 for 82001, 2 for 82002, 3 for 82003, 4 for 82701, and 5 for 82702\n";
    // Prompting user for input
    cout << "Select an option number: ";
    // Collecting user input
    cin >> SectionNumber;

    // Determining section name by user input
    // If user input 1 set to option 1
    if (SectionNumber == 1)
        SectionName = "82001";
    // If user input 2 set to option 2
    else if (SectionNumber == 2)
        SectionName = "82002";
    // If user input 3 set to option 3
    else if (SectionNumber == 3)
        SectionName = "82003";
    // If user input 4 set to option 4
    else if (SectionNumber == 4)
        SectionName = "82701";
    // If user input 5 set to option 5
    else if (SectionNumber == 5)
        SectionName = "82702";
    // User input was not an option
    else
        cout << "Invalid option.";

    // Output the combined sentence
    cout << "You are now registered for the " << SubjectName << " course " << RubericName << "-" << CourseName << "-" << SectionName << "!" << endl;

    // Prevent the console from closing

    // Prompt user to press any key
    cout << "\n\nPress any key to continue...";

    // Wait for a character
    _getch();

    return 0;

}

