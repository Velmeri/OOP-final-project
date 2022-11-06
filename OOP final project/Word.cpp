#include "Word.h"

Word::Word(string w) {
	word = w;
	GuessedSymbols = new bool[word.size()];
	for (int i = 0; i < word.size(); i++)
		GuessedSymbols[i] = 0;
	for (int i = 0; i < 26; i++) {
		UsedSymbols[i] = 0;
	}
}

Word::~Word()
{
	delete[] GuessedSymbols;
}

void Word::Show() {
	for (int i = 0; i < word.size(); i++) {
#ifdef TestMod
		cout << GuessedSymbols[i];
#endif 
		if (GuessedSymbols[i])
			cout << word[i] << ' ';
			
		else
			cout << "_ ";
	}
}

bool Word::Сheck(char c)
{
	cout << 65 - c;
	UsedSymbols[c - 65] = 1;
	if (word.find(c) != string::npos) {
		for (int i = 0; i < word.size(); i++)
			if (word[i] == c)
				GuessedSymbols[i] = true;
		
#ifdef TestMod
		for (int i = 0; i < word.size(); i++)
		cout << GuessedSymbols[i];
#endif
		return 1;
	}
	return 0;
}

void Word::ShowUsed()
{
	for (char i = 0; i < 26; i++)
		if(UsedSymbols[i])
			cout << (char)(i + 65) << ' ';
}

bool Word::IsUsed(char c)
{
		if (UsedSymbols[c - 65] == 1)
			return 1;
		return 0;
}

bool Word::IsAll() 
{
	for (int i = 0; i < word.size(); i++)
		if (!GuessedSymbols[i])
			return 0;
	return 1;
}


