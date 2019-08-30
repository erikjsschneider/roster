#ifndef STUDENT_H
#define STUDENT_H
#pragma once
#include <string>
#include "degree.h"

using namespace std;

class Student
{
private:
	string studentId;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int daysInCourse[3];

public:
	Student();
	Student(
		string studentId,
		string firstName,
		string lastName,
		string emailAddress,
		int age,
		int* daysInCourse);

	void setStudentId(string id);
	string getStudentId();
	void setFirstName(string firstName);
	string getFirstName();
	void setLastName(string lastName);
	string getLastName();
	void setEmailAddress(string emailAddress);
	string getEmailAddress();
	void setAge(int age);
	int getAge();
	void setDaysInCourse(int* days);
	int* getDaysInCourse();

	virtual void print();

	~Student();

	virtual Degree getDegreeProgram();
};

#endif // STUDENT_H