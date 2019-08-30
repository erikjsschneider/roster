#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H
#pragma once

#include "student.h"
#include "degree.h"

class SecurityStudent : public Student
{
private:
	Degree degree;

public:
	SecurityStudent(
		string studentId,
		string firstName,
		string lastName,
		string emailAddress,
		int age,
		int* days,
		Degree degree
	);
	~SecurityStudent();

	Degree getDegreeProgram();
	void print();
};

#endif // SECURITYSTUDENT_H