#include <string>
#include "degree.h"
#include "student.h"

using namespace std;

//Student::Student(int studentId, string firstName, string lastName, string emailAddress, int age, int daysInCourse, Degree degree)
//{
//}

Student::Student()
{
	studentId = 0;
	firstName = "First";
	lastName = "Last";
	emailAddress = "abc123@aol.com";
	age = 0;
	daysInCourse[3] = 0;
	degree = SOFTWARE;

	return;
}

Student::~Student() {}

void Student::setStudentId(int id)
{
	studentId = id;
	return;
}

int Student::getStudentId() const
{
	return studentId;
}

void Student::setFirstName(string fName)
{
	firstName = fName;
	return;
}

string Student::getFirstName() const
{
	return firstName;
}

void Student::setLastName(string lName)
{
	lastName = lName;
	return;
}

string Student::getLastName() const
{
	return lastName;
}

void Student::setEmailAddress(string email)
{
	emailAddress = email;
	return;
}

string Student::getEmailAddress() const
{
	return emailAddress;
}

void Student::setAge(int ageNum)
{
	age = ageNum;
	return;
}

int Student::getAge() const
{
	return age;
}

void Student::setDaysInCourse(int* days)
{
	daysInCourse[3] = days[3];
	return;
}

int Student::getDaysInCourse() const
{
	return daysInCourse[3];
}

void Student::setDegree(Degree deg)
{
	degree = deg;
	return;
}

Degree Student::getDegree() const
{
	return degree;
}