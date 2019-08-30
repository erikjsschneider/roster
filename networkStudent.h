#ifndef NETWORKSTUDENT_H
#define NETWORKSTUDENT_H
#pragma once

#include "student.h"
#include "degree.h"

class NetworkStudent : public Student
{
private:
	Degree degree;

public:
	NetworkStudent(
		string studentId,
		string firstName,
		string lastName,
		string emailAddress,
		int age,
		int* days,
		Degree degree
	);
	~NetworkStudent();

	Degree getDegreeProgram();
	void print();
};

#endif // NETWORKSTUDENT_H