#include "WordFile.h"

WordFile::WordFile()
{
	WFile.open("WFile.txt");
	if (!WFile.is_open())
		throw !WFile.is_open();
	string s;
	while (!WFile.eof()) {
		WFile >> s;
		arr.push_back(s);
	}
}

WordFile::~WordFile()
{
	WFile.close();
}

string WordFile::GetRandWord()
{
	short index = rand() % arr.size();
	return arr[index];
}
