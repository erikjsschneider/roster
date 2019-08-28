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
	string* degree;
	Degree degreeType;

public:
	Student();
	Student(
		string studentId,
		string firstName,
		string lastName,
		string emailAddress,
		int age,
		int* daysInCourse,
		string degree);

	void setStudentId(string id);
	string getStudentId();
	void setFirstName(string fName);
	string getFirstName();
	void setLastName(string lName);
	string getLastName();
	void setEmailAddress(string email);
	string getEmailAddress();
	void setAge(int ageNum);
	int getAge();
	void setDaysInCourse(int* days);
	int* getDaysInCourse();
	void setDegreeType(string deg);
	void setDegreeStr();
	string getDegree();

	virtual void print();

	~Student();

	virtual void getDegreeProgram() {}
};

#endif // STUDENT_H