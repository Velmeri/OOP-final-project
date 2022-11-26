#include "WordFile.h"

WordFile::WordFile()
{
	WFile.open("WFile.txt", fstream::in | fstream::out);
}

WordFile::~WordFile()
{
	WFile.close();
}

