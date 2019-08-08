#include <string>
#include "degree.h"
#include "student.h"

using namespace std;

Student::Student(int studentId, string firstName, string lastName, string emailAddress, int age, int daysInCourse, Degree degree)
{

}

Student::~Student() {}

void Student::set_studentId(int id)
{
	studentId = id;
	return studentId;
}

int Student::get_studentId()
{
	return studentId;
}

string Student::get_firstName()
{
	return firstName;
}

string Student::get_lastName()
{
	return lastName;
}

string Student::get_emailAddress()
{
	return emailAddress;
}

int Student::get_age()
{
	return age;
}

int Student::get_daysInCourse()
{
	return daysInCourse[3];
}

Degree Student::get_degree()
{
	return degree;
}