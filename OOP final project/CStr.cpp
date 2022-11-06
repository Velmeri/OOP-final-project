#include "CStr.h"

using namespace std;

CStr::CStr(string str)
{
	this->str = str;
	color = DefaultColor;
}

CStr::CStr(string str, int color)
{
	this->str = str;
	this->color = color;
}

CStr::CStr(char c, int color)
{
	str = c;
	this->color = color;
}

void CStr::SetColor(int color)
{
	this->color = color;
}

int CStr::GetColor()
{
	return color;
}

void CStr::SetStr(string str)
{
	this->str = str;
}

void CStr::Print()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
	cout << str;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), DefaultColor);
}

void CStr::Print(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
	cout << str;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), DefaultColor);
}

string CStr::GetStr()
{
	return str;
}

CStr& CStr::operator=(string str)
{
	this->str = str;
	return *this;
}

CStr& CStr::operator=(CStr obj)
{
	str = obj.str;
	color = obj.color;
	return *this;
}

std::ostream& operator<<(std::ostream& out, const CStr& obj)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), obj.color);
	out << obj.str;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), obj.DefaultColor);
	return out;
}
