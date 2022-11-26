#pragma once
#include <fstream>
#include <string>
#include <time.h>

using namespace std;

class WordFile
{
	int size;
	fstream WFile;
public:
	WordFile();
	~WordFile();

	string GetRandWord;
};

