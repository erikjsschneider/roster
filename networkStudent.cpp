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
	this->setDegree(degree);
}

NetworkStudent::~NetworkStudent() {}

void NetworkStudent::getDegreeProgram() {}

void NetworkStudent::print()
{
	cout << "Enrolled in the " << this->getDegreeProgram() << " degree program.\n";
}