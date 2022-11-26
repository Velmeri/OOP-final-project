#pragma once
#include "Gallow.h"
#include "CStr.h"
#include "Word.h"
#include "Stopwatch.h"
#include "WordFile.h"

class Menu
{
	enum Colors { BLUE = 9, GREEN, CIAN, RED, PURPLE, YELLOW };
	int color = 10;
	bool CheatMod = 0;
public:
	void ChaetModSwitch() {
		CheatMod = !CheatMod;
	}
	void SetColor(short color) {
		if (color >= BLUE && color <= YELLOW)
			this->color = color;
		else
			this->color = 9;
	}
	short GetColor() {
		return color;
	}

	int Main();
	int START();
	bool SP(); //SINGLE PLAYER MOD
	int Option(short option = 0);
};

