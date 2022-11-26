#pragma once
#include <string>
#include <iostream>

using namespace std;

class Word
{
	
	string word;
	bool* GuessedSymbols;
	bool UsedSymbols[26];
public:
	Word(string w);
	~Word();
	void Show();
	bool Сheck(char c);

	void ShowUsed();
	bool IsUsed(char c);

	bool IsAll();
};

