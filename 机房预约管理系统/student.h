#pragma once
#include	<iostream>
#include	<string>
#include	<vector>
using namespace std;
#include	"identity.h"
#include	"computerRoom.h"
#include	"globalFile.h"
#include	"orderFile.h"


class Student : public Identity
{
public:
	
	Student();
	Student(int id, string name, string pwd);

	int m_Id;
	vector<ComputerRoom> vCom;
	virtual void operMenu();
	void applyOrder();
	void showOrder();
	void showAllOrder();
	void cancelOrder();
	void showMyOrder();


	

};