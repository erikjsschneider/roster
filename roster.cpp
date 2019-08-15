// roster.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "degree.h"
#include "student.h"
#include "roster.h"

using namespace std;

Student* classRosterArray[5];
Student NetworkStudent;
Student SecurityStudent;
Student SoftwareStudent;

void main()
{
    cout << "This course is C867.\n";
	cout << "C++ was the language assigned for this project.\n";
	cout << "My student ID is 000669769\n";
	cout << "My name is Erik Schneider.\n";

	Roster classRoster();

	//add each student to classRoster

	classRoster.printAll();
	classRoster.printInvalidEmails();
	//loop through classRosterArray and for each element:
	classRoster.printAverageDaysInCourse(/*current_object's student id*/);
	classRoster.printByDegreeProgram(SOFTWARE);
	classRoster.remove("A3");
	classRoster.remove("A3");
	//expected: the above line should print a message saying such a student with this ID was not found.
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
