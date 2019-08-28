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
	string degree
) : Student
(
		studentId,
		firstName,
		lastName,
		emailAddress,
		age,
		days,
		degree
)
{
	this->setDegreeType(degree);
}

SecurityStudent::~SecurityStudent() {}

void SecurityStudent::getDegreeProgram() {}

void SecurityStudent::print()
{
	cout << "Enrolled in the " << this->getDegree() << " degree program.\n";
}