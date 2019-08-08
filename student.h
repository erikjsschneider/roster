#ifndef STUDENT_H
#define STUDENT_H
#pragma once
#include <string>
#include "degree.h"

using namespace std;

class Student {
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
	~Student();
	int get_studentId();
	string get_firstName();
	string get_lastName();
	string get_emailAddress();
	int get_age();
	int get_daysInCourse();
	Degree get_degree();

	Student(int studentId, string firstName, string lastName, string emailAddress, int age, int daysInCourse, Degree degree)
	{

	}
};

#endif // STUDENT_H