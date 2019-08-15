#ifndef NETWORKSTUDENT_H
#define NETWORKSTUDENT_H
#pragma once

#include "student.h"
#include "degree.h"

class NetworkStudent
{
private:
	Degree degree = NETWORKING;

public:
	virtual Degree getDegreeProgram() const
	{
		return degree;
	}
};

#endif // NETWORKSTUDENT_H