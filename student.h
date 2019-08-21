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
	Degree degree;

public:
	Student();

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
	int getDaysInCourse();
	void setDegree(Degree deg);
	Degree getDegree();

	virtual void print();

	~Student();

	virtual Degree getDegreeProgram() {}
};

#endif // STUDENT_H