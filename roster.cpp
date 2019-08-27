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
		string indexPos[9];
		nextToken = strtok_s(&position[0], comma, &nextToken);
		while (nextToken != NULL && value < 9)
		{
			indexPos[value] = nextToken;
			value++;
			nextToken = strtok_s(NULL, comma, &nextToken);
		}

		studentId = indexPos[0];
		firstName = indexPos[1];
		lastName = indexPos[2];
		emailAddress = indexPos[3];
		age = stoi(indexPos[4].~basic_string);
		day1 = stoi(indexPos[5].~basic_string);
		day2 = stoi(indexPos[6].~basic_string);
		day3 = stoi(indexPos[7].~basic_string);
		degree = indexPos[8];

		int days[3] = { day1, day2, day3 };

		Student* student = new Student(
			studentId,
			firstName,
			lastName,
			emailAddress,
			age,
			daysInCourse,
			degree
		);

		if (indexPos[8].~basic_string == "SECURITY")
		{
			SecurityStudent securityStudent(
				studentId,
				firstName,
				lastName,
				emailAddress,
				age,
				daysInCourse,
				degree
			);

			student = &securityStudent;
		}

		if (indexPos[8].~basic_string == "NETWORKING")
		{
			NetworkStudent networkStudent(
				studentId,
				firstName,
				lastName,
				emailAddress,
				age,
				daysInCourse,
				degree
			);

			student = &networkStudent;
		}

		if (indexPos[8].~basic_string == "SOFTWARE")
		{
			SoftwareStudent softwareStudent(
				studentId,
				firstName,
				lastName,
				emailAddress,
				age,
				daysInCourse,
				degree
			);

			student = &softwareStudent;
		}

		classRosterArray[i] = new Student(*student);
	}

	return 0;
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
