// roster.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <list>
#include <regex>

#include "degree.h"
#include "student.h"
#include "networkStudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"
#include "roster.h"

using namespace std;

Roster::Roster() {}

void Roster::populateStudents()
{
	for (int i = 0; i < SIZE; i++)
	{
		string studentId, firstName, lastName, emailAddress, position;
		int age, day1, day2, day3;
		Degree degree{};

		position = studentData[i];
		char comma[] = ",";
		char* token = NULL;
		char* nextToken = NULL;
		int value = 0;
		string indexPos[9];

		token = strtok_s(&position[0], comma, &nextToken);
		while (token != NULL && value < 9)
		{
			indexPos[value] = token;
			token = strtok_s(NULL, comma, &nextToken);
			value++;
		}

		studentId = indexPos[0].c_str();
		firstName = indexPos[1].c_str();
		lastName = indexPos[2].c_str();
		emailAddress = indexPos[3].c_str();
		age = stoi(indexPos[4].c_str());
		day1 = stoi(indexPos[5].c_str());
		day2 = stoi(indexPos[6].c_str());
		day3 = stoi(indexPos[7].c_str());

		if (indexPos[8] == "SECURITY")
		{
			degree = SECURITY;
		}

		if (indexPos[8] == "NETWORK")
		{
			degree = NETWORK;
		}

		if (indexPos[8] == "SOFTWARE")
		{
			degree = SOFTWARE;
		}

		add(studentId, firstName, lastName, emailAddress, age, day1, day2, day3, degree);
		cout << "\n";
	}

}

void Roster::add
(
	string studentId,
	string firstName,
	string lastName,
	string emailAddress,
	int age,
	int day1,
	int day2,
	int day3,
	Degree degree
)
{
	int daysInCourse[3];
	daysInCourse[0] = day1;
	daysInCourse[1] = day2;
	daysInCourse[2] = day3;

	if (degree == SECURITY)
	{
		classRosterArray[pos] = new SecurityStudent(studentId, firstName, lastName, emailAddress, age, daysInCourse, degree);
	}
	
	if (degree == NETWORK)
	{
		classRosterArray[pos] = new NetworkStudent(studentId, firstName, lastName, emailAddress, age, daysInCourse, degree);
	}
	
	if (degree == SOFTWARE)
	{
		classRosterArray[pos] = new SoftwareStudent(studentId, firstName, lastName, emailAddress, age, daysInCourse, degree);
	}

	pos++;
}

void Roster::printInvalidEmails()
{
	list<string> emailAddresses;

	for (int i = 0; i < SIZE; i++)
	{
		string position = studentData[i];
		char* token = NULL;
		char* nextToken = NULL;

		char comma[] = ",";
		int value = 0;
		string indexPos[9];

		token = strtok_s(&position[0], comma, &nextToken);
		while (token != NULL && value < 9)
		{
			indexPos[value] = token;
			token = strtok_s(NULL, comma, &nextToken);
			value++;
		}

		try
		{
			regex r("^(([A-Za-z0-9._])+\\@([A-Za-z])+\\.([A-Za-z]+))$");
			smatch match;
			if (!regex_search(indexPos[3], match, r))
			{
				emailAddresses.push_back(indexPos[3].c_str());
			}
		}
		catch (regex_error& e)
		{
			cout << "";
		}
	}

	cout << "\nInvalid Email Addresses: ";

	for (auto invalidEmails : emailAddresses)
	{
		cout << invalidEmails << ", ";
	}

	cout << "\b\b \n\n";
}

void Roster::printAverageDaysInCourse(string studentId)
{
	list<int> averageDays;

	for (int i = 0; i < SIZE; i++)
	{
		int day1, day2, day3, total;
		string position = studentData[i];
		char* token = NULL;
		char* nextToken = NULL;

		char comma[] = ",";
		int value = 0;
		string indexPos[9];

		token = strtok_s(&position[0], comma, &nextToken);
		while (token != NULL && value < 9)
		{
			indexPos[value] = token;
			token = strtok_s(NULL, comma, &nextToken);
			value++;
		}

		day1 = atoi(indexPos[5].c_str());
		day2 = atoi(indexPos[6].c_str());
		day3 = atoi(indexPos[7].c_str());

		total = (day1 + day2 + day3)/3;

		cout << "Student Id " << studentId << " Average Days In Course: " << total << ".\n";
	}

	//take the 3 day values and average them, then return them
	//cout << "Student Id " << studentId << " Average Days In Course: " << total << ".\n";
}

void Roster::printAll()
{
	for (int j = 0; j < SIZE; j++)
	{
		this->classRosterArray[j]->print();
	}
}

void Roster::printByDegreeProgram(Degree degreeProgram)
{
	//use regex to filter out degreeType that matches with the input degreeProgram
	for (int i = 0; i < SIZE; i++)
	{
		string position = studentData[i];
		char* token = NULL;
		char* nextToken = NULL;

		char comma[] = ",";
		int value = 0;
		string indexPos[9];

		token = strtok_s(&position[0], comma, &nextToken);
		while (token != NULL && value < 9)
		{
			indexPos[value] = token;
			token = strtok_s(NULL, comma, &nextToken);
			value++;
		}

		//switch (atoi(indexPos[8].c_str()))
		//{
		//case SECURITY:
			//cout << "Enrolled in the Security Degree Program: \n" << studentData[i] << "\n";
			//break;
		//case NETWORKING:
			//cout << "Enrolled in the Networking Degree Program: \n" << studentData[i] << "\n";
			//break;
		//case SOFTWARE:
			//cout << "Enrolled in the Software Degree Program: \n" << studentData[i] << "\n";
			//break;
		//default:
			//break;
		//}

		//if (strcmp(indexPos[8].c_str(), "SECURITY"))
		//{
			//cout << "Enrolled in the Security Degree Program: \n" << studentData[i] << "\n";
		//}
		//else if (strcmp(indexPos[8].c_str(), "NETWORKING"))
		//{
			//cout << "Enrolled in the Networking Degree Program: \n" << studentData[i] << "\n";
		//} 
		//else if (strcmp(indexPos[8].c_str(), "SOFTWARE"))
		//{
			//cout << "Enrolled in the Software Degree Program: \n" << studentData[i] << "\n";
		//}

		try
		{
			regex r("^(SECURITY)+$");
			smatch match;
			if (regex_search(indexPos[8], match, r))
			{
				cout << "Enrolled in the Security Degree Program: \n" << studentData[i] << "\n\n";
			}
		}
		catch (regex_error& e)
		{
			cout << "";
		}
		
		try
		{
			regex r("^(NETWORK)+$");
			smatch match;
			if (regex_search(indexPos[8], match, r))
			{
				cout << "Enrolled in the Networking Degree Program: \n" << studentData[i] << "\n\n";
			}
		}
		catch (regex_error& e)
		{
			cout << "";
		}
		
		try
		{
			regex r("^(SOFTWARE)+$");
			smatch match;
			if (regex_search(indexPos[8], match, r))
			{
				cout << "Enrolled in the Software Degree Program: \n" << studentData[i] << "\n\n";
			}
		}
		catch (regex_error& e)
		{
			cout << "";
		}
	}
}

void Roster::remove(string studentId)
{
	for (int i = 0; i < SIZE; i++)
	{
		string position = studentData[i];
		char* token = NULL;
		char* nextToken = NULL;

		position = studentData[i];
		char comma[] = ",";
		int value = 0;
		string indexPos[9];

		token = strtok_s(&position[0], comma, &nextToken);
		while (token != NULL && value < 9)
		{
			indexPos[value] = token;
			token = strtok_s(NULL, comma, &nextToken);
			value++;
		}
		cout << indexPos[0] << "\n";

		if (indexPos[0] == studentId)
		{
			position[i] = NULL;
			cout << "Matched! " << indexPos[0] << "\n";
		}
		//try
		//{
		//	if (indexPos[0] == studentId)
		//	{
		//		position[i] = NULL;
		//		//cout << "Matched! " << indexPos[0] << "\n";
		//	}
		//}
		//catch (invalid_argument e)
		//{
		//	cout << "Student with this Id was not found.";
		//}
	}
}

int main()
{
    cout << "This course is C867.\n";
	cout << "C++ was the language assigned for this project.\n";
	cout << "My student ID is 000669769\n";
	cout << "My name is Erik Schneider.\n";

	Roster classRoster;

	//add each student to classRoster
	classRoster.populateStudents();
	classRoster.printAll();
	classRoster.printInvalidEmails();
	//loop through classRosterArray and for each element:
	//classRoster.printAverageDaysInCourse(/*current_object's student id*/);
	//classRoster.printByDegreeProgram(SOFTWARE);
	//classRoster.remove("A3");
	//classRoster.remove("A3");
	//expected: the above line should print a message saying such a student with this ID was not found.
}

Roster::~Roster() {}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
