#pragma once 
#include	<iostream>
#include	<fstream>
#include	<string>
#include	<map>
#include	"globalFile.h"
using namespace std;

class OrderFile
{
public:
	OrderFile();
	void updateOrder();
	map<int, map<string, string>> m_orderData;

	//ԤԼ��¼����
	int m_Size;
};