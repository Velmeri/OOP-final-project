#include "Word.h"

Word::Word(string w) {
	word = w;
	GuessedSymbols = new bool[word.size()];
	for (int i = 0; i < word.size(); i++)
		GuessedSymbols[i] = 0;
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

bool Word::IsAll() 
{
	for (int i = 0; i < word.size(); i++)
		if (!GuessedSymbols[i])
			return 0;
	return 1;
}


