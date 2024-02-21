#pragma once
#include	<iostream>
#include	<algorithm>
#include	<string>
#include	<fstream>
#include	<vector>
#include	"teacher.h"
#include	"student.h"
#include	"globalFile.h"
#include	"identity.h"
#include	"computerRoom.h"
using namespace std;

class Manager : public Identity
{
public:
	Manager();
	Manager(string name, string pwd);
	virtual void operMenu();

	//����˺�  
	void addPerson();

	//�鿴�˺�
	void showPerson();

	//�鿴������Ϣ
	void showComputer();

	//���ԤԼ��¼
	void cleanFile();
	bool checkRepeat(int id,int type);

	void initVector();
	vector<Student> vStu;

	vector<Teacher> vTea;

	vector<ComputerRoom> vCom;
};
