#ifndef ROSTER_H
#define ROSTER_H
#pragma once

#include <string>

using namespace std;

const string studentData[] =
{
	"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Erik,Schneider,eschne7@wgu.edu,32,16,25,30,SOFTWARE"
};

const int SIZE = 5;

class Roster
{
private:
	Student* classRosterArray[SIZE];
	int pos = 0;

public:
	Roster();
	~Roster();

	void add
	(
		string studentID,
		string firstName,
		string lastName,
		string emailAddress,
		int age,
		int daysInCourse1,
		int daysInCourse2,
		int daysInCourse3,
		Degree degree
	);

	void populateStudents();
	void remove(string);
	void printAll();
	void printAverageDaysInCourse(string);
	void printInvalidEmails();
	void printByDegreeProgram(Degree);
	Student** getClassRosterArray();

};
#endif // ROSTER_H
