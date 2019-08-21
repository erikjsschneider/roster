#include <iostream>
#include <string>
#include "degree.h"
#include "student.h"

using namespace std;

Student::Student()
{
	studentId = "studentId";
	firstName = "first";
	lastName = "last";
	emailAddress = "email";
	age = 0;
	daysInCourse[3] = { 0, 0, 0 };
	degree = SOFTWARE;

	return;
}

Student::Student
(
	string studentId,
	string fName,
	string lName,
	string email,
	int age,
	int* days,
	Degree degree
)
{
	this->studentId = studentId;
	this->firstName = fName;
	this->lastName = lName;
	this->emailAddress = email;
	this->age = age;
	this->daysInCourse = days;
	this->degree = degree;
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
	this->daysInCourse[3] = days[3];
	return;
}

int Student::getDaysInCourse()
{
	return daysInCourse[2];
}

void Student::setDegree(Degree degree)
{
	this->degree = degree;
	return;
}

Degree Student::getDegree()
{
	return degree;
}

void Student::print()
{
	cout << "First Name: " << getFirstName();
	cout << "Last Name: " << getLastName();
	cout << "Age: " << getAge();
}

void Student::getDegreeProgram()
{
	this->getDegreeProgram();
}