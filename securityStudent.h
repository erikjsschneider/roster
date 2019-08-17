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
		Degree::SECURITY;
	}
};

#endif // SECURITYSTUDENT_H