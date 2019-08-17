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
		Degree::SOFTWARE;
	}
};

#endif // SOFTWARESTUDENT_H