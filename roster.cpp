// roster.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "degree.h"
#include "student.h"
#include "networkStudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"
#include "roster.h"

using namespace std;

Roster::Roster()
{
	this->populateStudents();
}

Roster::~Roster() {}

Student* classRosterArray[5];
//Student NetworkStudent;
//Student SecurityStudent;
//Student SoftwareStudent;

//Degree degree;

int Roster::populateStudents()
{
	for (int i = 0; i < SIZE; i++)
	{
		string studentId, firstName, lastName, emailAddress, degree, position;
		int age, day1, day2, day3;
		char* nextToken;

		position = studentData[i];
		char comma[] = ",";
		int value = 0;
		string person[9];

		token = strtok_s(NULL, comma, &nextToken)
	}







		--
}

void Roster::add
(
	string studentID,
	string firstName,
	string lastName,
	string emailAddress,
	int age,
	int daysInCourse1,
	int daysInCourse2,
	int daysInCourse3,
	string degree
)
{
	return;
}

void Roster::printInvalidEmails()
{
	//use regex to check for invalid emails, perhaps
}

void Roster::printDaysInCourse(string studentId)
{
	//take the 3 day values and average them, then return them
}

void Roster::printAll()
{
	for (int j = 0; j < SIZE; j++)
	{
		this->classRosterArray[j]->print();
	}
}

void Roster::printByDegreeProgram(int degreeProgram)
{
	//use regex to filter out degreeType that matches with the input degreeProgram
}

int main(void)
{
    cout << "This course is C867.\n";
	cout << "C++ was the language assigned for this project.\n";
	cout << "My student ID is 000669769\n";
	cout << "My name is Erik Schneider.\n";

	Roster classRoster;

	//add each student to classRoster

	classRoster.printAll();
	classRoster.printInvalidEmails();
	//loop through classRosterArray and for each element:
	//classRoster.printDaysInCourse(/*current_object's student id*/);
	//classRoster.printByDegreeProgram(SOFTWARE);
	classRoster.remove("A3");
	classRoster.remove("A3");
	//expected: the above line should print a message saying such a student with this ID was not found.
}

//Roster::~Roster() {}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
