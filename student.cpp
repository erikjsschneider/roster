#include <string>
#include "degree.h"
#include "student.h"

using namespace std;

//Student::Student(int studentId, string firstName, string lastName, string emailAddress, int age, int daysInCourse, Degree degree)
//{
//}

Student::Student()
{
	studentId = "studentId";
	firstName = "first";
	lastName = "last";
	emailAddress = "email";
	age = 0;
	daysInCourse[3] = { 0, 0, 0 };
	degree;

	return;
}

Student::~Student() {}

void Student::setStudentId(string studentId)
{
	this->studentId = studentId;
	return;
}

string Student::getStudentId() const
{
	return studentId;
}

void Student::setFirstName(string fName)
{
	this->firstName = fName;
	return;
}

string Student::getFirstName() const
{
	return firstName;
}

void Student::setLastName(string lName)
{
	this->lastName = lName;
	return;
}

string Student::getLastName() const
{
	return lastName;
}

void Student::setEmailAddress(string email)
{
	this->emailAddress = email;
	return;
}

string Student::getEmailAddress() const
{
	return emailAddress;
}

void Student::setAge(int age)
{
	this->age = age;
	return;
}

int Student::getAge() const
{
	return age;
}

void Student::setDaysInCourse(int* days)
{
	this->daysInCourse[3] = days[3];
	return;
}

int Student::getDaysInCourse() const
{
	return daysInCourse[2];
}

void Student::setDegree(Degree degree)
{
	this->degree = degree;
	return;
}

Degree Student::getDegree() const
{
	return degree;
}