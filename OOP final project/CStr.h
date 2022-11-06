#pragma once
#include <string>
#include <Windows.h>
#include <iostream>

using namespace std;

 /* Этот класс позволяет использовать цветные стокт
 Мне он не сильно нравится, поэтому я его буду доделовать
 в будущем. Я еще хачу сделать класс CChar который 
 будет отвечать за цветные символы */
class CStr
{
	string str;
	int color;
	const int DefaultColor = 15;

public:
	CStr() { color = 15; }
	CStr(string str);
	CStr(string str, int color);
	CStr(char c, int color);

	void SetColor(int color);
	int GetColor();
	void SetStr(string str);
	void Print();
	void Print(int color);
	string GetStr();

	CStr& operator = (string str);
	CStr& operator = (CStr obj);
	friend std::ostream& operator<< (std::ostream& out, const CStr& point);
};

