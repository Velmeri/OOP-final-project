#pragma once
#include <string>
#include <Windows.h>
#include <iostream>

using namespace std;

/*That class slightly modifies the string class 
so that the string has its own color*/
class CStr
{
	string str;
	int color;
	const int DefaultColor = 15;

public:
	CStr() { color = 15; }
	CStr(string str);
	CStr(string str, int color);

	void SetColor(int color);
	int GetColor();
	void SetStr(string str);
	string GetStr();

	CStr& operator = (string str);
	CStr& operator = (CStr obj);
	friend std::ostream& operator<< (std::ostream& out, const CStr& point);
};

