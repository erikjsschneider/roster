#ifndef NETWORKSTUDENT_H
#define NETWORKSTUDENT_H
#pragma once

#include "student.h"
#include "degree.h"

class NetworkStudent : public Student
{
private:
	string degree;

public:
	NetworkStudent(
		string studentId,
		string firstName,
		string lastName,
		string emailAddress,
		int age,
		int* days,
		string degree);
	~NetworkStudent();

	void getDegreeProgram();
	void print();

	/*virtual Degree getDegreeProgram() const
	{
		Degree::NETWORK;
	}*/
};

#endif // NETWORKSTUDENT_H