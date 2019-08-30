#include <iostream>
#include <string>
#include "degree.h"
#include "student.h"
#include "roster.h"

using namespace std;

Student::Student() {}

Student::Student
(
	string studentId,
	string firstName,
	string lastName,
	string emailAddress,
	int age,
	int* days
)
{
	this->studentId = studentId;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->age = age;
	this->setDaysInCourse(days);
}

Student::~Student() {}

void Student::setStudentId(string studentId)
{
	this->studentId = studentId;
	return;
}

string Student::getStudentId()
{
	return studentId;
}

void Student::setFirstName(string fName)
{
	this->firstName = fName;
	return;
}

string Student::getFirstName()
{
	return firstName;
}

void Student::setLastName(string lName)
{
	this->lastName = lName;
	return;
}

string Student::getLastName()
{
	return lastName;
}

void Student::setEmailAddress(string email)
{
	this->emailAddress = email;
	return;
}

string Student::getEmailAddress()
{
	return emailAddress;
}

void Student::setAge(int age)
{
	this->age = age;
	return;
}

int Student::getAge()
{
	return age;
}

void Student::setDaysInCourse(int* days)
{
	for (int i = 0; i < 3; i++)
	{
		this->daysInCourse[i] = days[i];
	}
	return;
}

int* Student::getDaysInCourse()
{
	return this->daysInCourse;
}

Degree Student::getDegreeProgram()
{
	return SOFTWARE;
}

void Student::print()
{
	/*cout << "\nStudent Id: " << getStudentId();
	cout << "\nFirst Name: " << getFirstName();
	cout << "\nLast Name: " << getLastName();
	cout << "\nEmail Address: " << getEmailAddress();
	cout << "\nAge: " << getAge();
	cout << "\nDays In Course: ";

	for (int i = 0; i < 3; i++)
	{
		cout << this->getDaysInCourse()[i];
		if (i < 2)
		{
			cout << ", ";
		}
		else
		{
			cout << "\n";
		}
	}*/

	//cout << "\nDegree: " << getDegree();
}
