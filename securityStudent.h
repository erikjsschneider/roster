#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H
#pragma once

#include "student.h"
#include "degree.h"

class SecurityStudent
{
public:
	virtual Degree getDegreeProgram() const
	{
		return degree;
	}
};

#endif // SECURITYSTUDENT_H