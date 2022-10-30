#include "Menu.h"

int Menu::Main(int color)
{
	const int min = 0;
	const int max = 2;
	int option = 0;

	cout << endl << '\t';
	cout << CStr(">START", color);
	cout << endl << '\t';
	cout << "OPTIONS";
	cout << endl << '\t';
	cout << "EXIT";

	while (!GetKeyState('F')) {
		int preOption = option;
		if (GetKeyState('W') & 0x8000) {
			if (option != min)
				option--;
			else
				option = max;
			while (GetKeyState('W') & 0x8000); // Я сам додумался ＼(￣▽￣)／
		}
		if (GetKeyState('S') & 0x8000) {
			if (option != max)
				option++;
			else option = min;
			while (GetKeyState('S') & 0x8000);
		}
		if (option != preOption) {
			system("cls");
			switch (option)
			{
			case 0:
				cout << endl << '\t';
				cout << CStr(">START", color);
				cout << endl << '\t';
				cout << "OPTIONS";
				cout << endl << '\t';
				cout << "EXIT";
				break;
			case 1:
				cout << endl << '\t';
				cout << "START";
				cout << endl << '\t';
				cout << CStr(">OPTIONS", color);
				cout << endl << '\t';
				cout << "EXIT";
				break;
			case 2:
				cout << endl << '\t';
				cout << "START";
				cout << endl << '\t';
				cout << "OPTIONS";
				cout << endl << '\t';
				cout << CStr(">EXIT", color);
				break;
			default:
				option = 1;
			}
			cout << endl << endl;
			cout << "\tW - UP;   S - DOWN;   F - SELECT";
		}
	}
	system("cls");
	return option;
}
