#pragma once
#include	<iostream>
#include	<algorithm>
#include	<string>
#include	<fstream>
#include	<vector>
using namespace std;

class Identity{
public:

	virtual void operMenu() = 0;

	string m_Name;
	string m_Pwd;
};