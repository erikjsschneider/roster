#ifndef SOFTWARESTUDENT_H
#define SOFTWARESTUDENT_H
#pragma once

#include "student.h"
#include "degree.h"

class SoftwareStudent
{
public:
	virtual Degree getDegreeProgram() const
	{
		return degree;
	}
};

#endif // SOFTWARESTUDENT_H