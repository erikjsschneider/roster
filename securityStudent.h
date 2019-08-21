#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H
#pragma once

#include "student.h"
#include "degree.h"

class SecurityStudent : public Student
{
private:
	string degree;

public:
	SecurityStudent(
		string studentId,
		string firstName,
		string lastName,
		string emailAddress,
		int age,
		int* days,
		string degree);
	~SecurityStudent();

	void getDegreeProgram();
	void print();

	/*virtual Degree getDegreeProgram() const
	{
		Degree::SECURITY;
	}*/
};

#endif // SECURITYSTUDENT_H