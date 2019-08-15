#ifndef STUDENT_H
#define STUDENT_H
#pragma once
#include <string>
#include "degree.h"

using namespace std;

class Student
{
private:
	int studentId;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int daysInCourse[3];
	Degree degree;

public:
	Student();

	void setStudentId(int id);
	int getStudentId() const;
	void setFirstName(string fName);
	string getFirstName() const;
	void setLastName(string lName);
	string getLastName() const;
	void setEmailAddress(string email);
	string getEmailAddress() const;
	void setAge(int ageNum);
	int getAge() const;
	void setDaysInCourse(int* days);
	int getDaysInCourse() const;
	void setDegree(Degree deg);
	Degree getDegree() const;

	virtual void print() const;

	~Student();

	virtual Degree getDegreeProgram() const {}
};

#endif // STUDENT_H