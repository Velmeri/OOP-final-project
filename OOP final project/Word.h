#pragma once
#include <string>
#include <iostream>

using namespace std;

class Word
{
	string word;
	bool* GuessedSymbols;
public:
	Word(string w);
	~Word();
	void Show();
	bool Сheck(char c);

	bool IsAll();
};

