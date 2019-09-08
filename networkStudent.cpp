#include <iostream>
#include <string>
#include "degree.h"
#include "student.h"
#include "roster.h"
#include "networkStudent.h"

using namespace std;

NetworkStudent::NetworkStudent
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

NetworkStudent::~NetworkStudent() {}

Degree NetworkStudent::getDegreeProgram()
{
	return degree;
}

void NetworkStudent::print()
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
	cout << "Degree Program: Network\n";
}