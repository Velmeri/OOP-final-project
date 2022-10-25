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
	const int c = obj.color;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), obj.color);
	out << obj.str;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), obj.DefaultColor);
	return out;
}
