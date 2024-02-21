#pragma once 
#include	<iostream>
#include	"orderFile.h"
using namespace std;

#include	"identity.h"	

class Teacher : public Identity
{
public:
	Teacher();
	Teacher(int empId, string name, string pwd);

	int m_EmpId;

	virtual void operMenu();

	void showAllOrder();

	void validOrder();
};