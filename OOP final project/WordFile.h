#pragma once
#include <fstream>
#include <string>
#include <time.h>
#include <vector>

using namespace std;

class WordFile
{
	ifstream WFile;
	vector <string> arr;
public:
	WordFile();
	~WordFile();

	string GetRandWord();
};

