#include <iostream>
#include <string>
#include "degree.h"
#include "student.h"
#include "roster.h"

using namespace std;

//Student::Student()
//{
	//studentId = "studentId";
	//firstName = "first";
	//lastName = "last";
	//emailAddress = "email";
	//age = 0;
	//daysInCourse[3] = { 0, 0, 0 };
	//degree = new string();
	//degreeType = UNDECIDED;
//}

Student::Student
(
	string studentId,
	string fName,
	string lName,
	string email,
	int age,
	int* days,
	string degree
)
{
	this->studentId = studentId;
	this->firstName = fName;
	this->lastName = lName;
	this->emailAddress = email;
	this->age = age;
	this->setDaysInCourse(days);
	//this->degree = degree;
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
	for (int i = 0; i <= 3; i++)
	{
		this->daysInCourse[i] = days[i];
	}
	return;
}

int* Student::getDaysInCourse()
{
	return this->daysInCourse;
}

void Student::setDegreeType(string degree)
{
	this->degree = &degree;

	if (degree == "SECURITY")
	{
		this->degreeType = SECURITY;
	}

	if (degree == "NETWORKING")
	{
		this->degreeType = NETWORKING;
	}

	if (degree == "SOFTWARE")
	{
		this->degreeType = SOFTWARE;
	}
	return;
}

void Student::setDegreeStr()
{
	switch (this->degreeType)
	{
	case SECURITY: 
		*(this->degree) = "SECURITY";
		break;
	case NETWORKING: 
		*(this->degree) = "NETWORKING";
		break;
	case SOFTWARE: 
		*(this->degree) = "SOFTWARE";
		break;
	default:
		*(this->degree) = "Undecided";
		break;
	}
}

string Student::getDegree()
{
	return *(this->degree);
}

void Student::getDegreeProgram()
{
	this->getDegree();
}

void Student::print()
{
	cout << "First Name: \n" << getFirstName();
	cout << "Last Name: \n" << getLastName();
	cout << "Age: \n" << getAge();
	cout << "Days In Course: ";

	for (int i = 0; i < 3; i++)
	{
		cout << this->getDaysInCourse()[i];
		if (i < 2)
		{
			cout << ", ";
		}
	}
}
