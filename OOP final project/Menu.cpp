#include "Menu.h"

void Menu::Main(int color)
{
	const int min = 0;
	const int max = 2;
	int option = 0;
	
	while (1) {
		int preOption = option;
		if (GetKeyState('W') & 0x8000)
		{
			if (option - 1 < min)
				option = max;
			else
				--option;
			while (GetKeyState('W') & 0x8000);\
			system("cls");
		}
		if (GetKeyState('S') & 0x8000) {
			system("cls");
			if (option + 1 > max)
				option = min;
			else
				++option;
			while (GetKeyState('S') & 0x8000);
			system("cls");
		}
		if (preOption != option) {
			system("cls");
			cout << option;
			switch (option)
			{
			case 0:
				cout << endl << '\t';
				cout << CStr(">START<", color);
				cout << endl << '\t';
				cout << "OPTIONS";
				cout << endl << '\t';
				cout << "EXIT";
				break;
			case 1:
				cout << endl << '\t';
				cout << "START";
				cout << endl << '\t';
				cout << CStr(">OPTIONS<", color);
				cout << endl << '\t';
				cout << "EXIT";
				break;
			case 2:
				cout << endl << '\t';
				cout << "START";
				cout << endl << '\t';
				cout << "OPTIONS";
				cout << endl << '\t';
				cout << CStr(">EXIT<", color);
			default:
				option = min;
			}
		}
	}
}
