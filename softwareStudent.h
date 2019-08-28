#ifndef SOFTWARESTUDENT_H
#define SOFTWARESTUDENT_H
#pragma once

#include "student.h"
#include "degree.h"

class SoftwareStudent : public Student
{
private:
	string degree;

public:
	SoftwareStudent(
		string studentId,
		string firstName,
		string lastName,
		string emailAddress,
		int age,
		int* days,
		string degree);
	~SoftwareStudent();

	void getDegreeProgram();
	void print();
};

#endif // SOFTWARESTUDENT_H