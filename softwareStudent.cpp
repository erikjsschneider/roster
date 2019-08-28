#include <iostream>
#include <string>
#include "degree.h"
#include "student.h"
#include "roster.h"
#include "softwareStudent.h"

using namespace std;

SoftwareStudent::SoftwareStudent
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

SoftwareStudent::~SoftwareStudent() {}

void SoftwareStudent::getDegreeProgram() {}

void SoftwareStudent::print()
{
	cout << "Enrolled in the " << this->getDegree() << " degree program.\n";
}