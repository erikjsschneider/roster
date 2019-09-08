#include <iostream>
#include <string>
#include "degree.h"
#include "student.h"
#include "roster.h"
#include "securityStudent.h"

using namespace std;

SecurityStudent::SecurityStudent
(
	string studentId,
	string firstName,
	string lastName,
	string emailAddress,
	int age,
	int* days,
	Degree deg
) : Student
(
		studentId,
		firstName,
		lastName,
		emailAddress,
		age,
		days
)
{
	degree = deg;
}

SecurityStudent::~SecurityStudent() {}

Degree SecurityStudent::getDegreeProgram() 
{
	return degree;
}

void SecurityStudent::print()
{
	cout << getStudentId();
	cout << "\tFirst Name: " << getFirstName();
	cout << "\tLast Name: " << getLastName();
	cout << "\tEmail Address: " << getEmailAddress();
	cout << "\tAge: " << getAge();
	cout << "\tDays In Course: ";

	for (int i = 0; i < 3; i++)
	{
		cout << this->getDaysInCourse()[i];
		if (i < 2)
		{
			cout << ", ";
		}
		else
		{
			cout << "\t";
		}
	}
	cout << "Degree Program: Security\n";
}