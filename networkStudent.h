#ifndef NETWORKSTUDENT_H
#define NETWORKSTUDENT_H
#pragma once

#include "student.h"
#include "degree.h"

class NetworkStudent
{
public:
	virtual Degree getDegreeProgram()
	{
		Degree::NETWORKING;
	}
};

#endif // NETWORKSTUDENT_H