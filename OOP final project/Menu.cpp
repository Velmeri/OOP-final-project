#include "Menu.h"

int Menu::Main()
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

	cout << endl << endl;
	cout << "\tW - UP;   S - DOWN;   F - SELECT";

	while (1) { // Выбор варианта я сделал с помрщью этой функции из библиотеки Windws.h
		int preOption = option;
		if (GetKeyState('W') & 0x8000) {
			if (option != min)
				option--;
			else
				option = max;
			while (GetKeyState('W') & 0x8000); // Я сам додумался ＼(￣▽￣)／
		}
		else if (GetKeyState('S') & 0x8000) {
			if (option != max)
				option++;
			else option = min;
			while (GetKeyState('S') & 0x8000);
		}
		if (option != preOption) {
			system("cls");
			switch (option) // Сдесть я вывожу на экран опции
			{
			case 0:
				cout << endl << '\t';
				cout << CStr(">START", color); // так я выделяю выбраную опцию
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
		else if (GetKeyState('F') & 0x8000) {
			while (GetKeyState('F') & 0x8000);
			system("cls");
			return option;
		}
	}
}

int Menu::START()
{
	const int min = 0;
	const int max = 2;
	int option = 0;

	cout << endl << '\t';
	cout << CStr(">SINGLE PLAYER", color); 
	cout << endl << '\t';
	cout << "MULTI PLAYER";
	cout << endl << '\t';
	cout << "BACK";

	cout << endl << endl;
	cout << "\tW - UP;   S - DOWN;   F - SELECT";

	while (1) {
		int preOption = option;
		if (GetKeyState('W') & 0x8000) {
			if (option != min)
				option--;
			else
				option = max;
			while (GetKeyState('W') & 0x8000);
		}
		else if (GetKeyState('S') & 0x8000) {
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
				cout << CStr(">SINGLE PLAYER", color);
				cout << endl << '\t';
				cout << "MULTI PLAYER";
				cout << endl << '\t';
				cout << "BACK";
				break;
			case 1:
				cout << endl << '\t';
				cout << "SINGLE PLAYER";
				cout << endl << '\t';
				cout << CStr(">MULTI PLAYER", color);
				cout << endl << '\t';
				cout << "BACK";
				break;
			case 2:
				cout << endl << '\t';
				cout << "SINGLE PLAYER";
				cout << endl << '\t';
				cout << "MULTI PLAYER";
				cout << endl << '\t';
				cout << CStr(">BACK", color);
				break;
			default:
				option = 1;
			}
			cout << endl << endl;
			cout << "\tW - UP;   S - DOWN;   F - SELECT";
		}
		else if (GetKeyState('F') & 0x8000) {
			while (GetKeyState('F') & 0x8000);
			system("cls");
			return option;
		}
	}
}

bool Menu::SP(){
	Gallow gallow;
	Stopwatch Start;
	WordFile WF;
	string SWord = WF.GetRandWord();
	Word word(SWord);
	int const min = 65;
	int const max = 90;
	int mistakes = 0;
	int option = 65;
		
		std::cout << "\n\t\t";
		if (CheatMod)
			cout << endl << '\t' << SWord;
		word.Show();
		cout << "\n\n\tUsed: ";
		cout << "\n\n\t";
		for (char i = min; i <= max; i++) /* Ввывожу алфовит на экран */ {
			if (i % 13 == 0)
				cout << "\n\t";
			cout << (char)i << " ";
		}
		cout << 123;
		while (mistakes < 6 && !word.IsAll())
		{ 
			int preOption = option;
			if (GetKeyState('W') & 0x8000) {
				if (option - 13 >= min)
					option -= 13;
				else
					option += 13;
				while (GetKeyState('W') & 0x8000);
			}
			else if (GetKeyState('S') & 0x8000) {
				if (option + 13 <= max)
					option += 13;
				else
					option -= 13;
				while (GetKeyState('S') & 0x8000);
			}
			else if (GetKeyState('A') & 0x8000) {
				if (option % 13 == 0)
					option += 12;
				else option -= 1;
				while (GetKeyState('A') & 0x8000);
			}
			else if (GetKeyState('D') & 0x8000) {
				if (option % 13 == 12)
					option -= 12;
				else option += 1;
				while (GetKeyState('D') & 0x8000);
			}
			else if (GetKeyState('F') & 0x8000) {
				while (GetKeyState('F') & 0x8000);
				if (word.IsUsed(option)) {
					system("cls");
					cout << "\n\tThis symbol has already been used";
;					Stopwatch a;
					while (a.GetTime() <= 1);
					system("cls");
				}
				else if (!word.Сheck(option)) {
					gallow++;
					mistakes++;
					system("cls");
					gallow.Draw();
					Stopwatch a;
					while (a.GetTime() <= 1);
				}
				system("cls");
				cout << option;
				cout << "\n\t\t";
				word.Show();
				cout << "\n\n\tUsed: ";
				word.ShowUsed();

				cout << "\n\n\t";
				for (char i = 65; i <= 90; i++) {
					if (i % 13 == 0)
						cout << "\n\t";
					if (option == i)
						cout << CStr(i, color) << ' ';
					else
						cout << (char)i << " ";
				}
			}
			if (option != preOption) {
				system("cls");
				cout << option;
				cout << "\n\t\t";
				word.Show();
				cout << "\n\n\tUsed: ";
				word.ShowUsed();
				cout << "\n\n\t";
				for (char i = 65; i <= 90; i++) {
					if (i % 13 == 0)
						cout << "\n\t";
					if (option == i)
						cout << CStr(i, color) << ' ';
					else
						cout << (char)i << " ";
				}
			}
		}
		std::system("cls");
		if (mistakes < 6)
			cout << "\n\tWell done. You won\n\t";
		
		else
			cout << "\n\tMaybe next time you will win\n\t";
		Stopwatch a;
		while (a.GetTime() <= 1);
		system("cls");
	return 1;
}

int Menu::Option(short option)
{
	switch (option) {
	case 0:	// Color
		cout << endl << '\t';
		cout << CStr(">COLOR", color);
		switch (color)
		{
		case BLUE:
			cout << CStr("  (BLUE)", color);
			break;
		case GREEN:
			cout << CStr("  (GREAN)", color);
			break;
		case CIAN:
			cout << CStr("  (CIAN)", color);
			break;
		case RED:
			cout << CStr("  (RED)", color);
			break;
		case PURPLE:
			cout << CStr("  (PURPLE)", color);
			break;
		case YELLOW:
			cout << CStr("  (YELLOW)", color);
			break;
		default:
			cout << "???";
			break;
		}
		cout << endl << '\t';
		cout << "CHEAT MOD";
		switch (CheatMod) {
		case 0:
			cout << "  (OFF)";
			break;
		case 1:
			cout << "  (ON)";
		}
		cout << endl << '\t';
		cout << "BACK";
		break;
	case 1:	//Cheat mod
		cout << endl << '\t';
		cout << "COLOR";
		switch (color)
		{
		case BLUE:
			cout << "  (BLUE)";
			break;
		case GREEN:
			cout << "  (GREAN)";
			break;
		case CIAN:
			cout << "  (CIAN)";
			break;
		case RED:
			cout << "  (RED)";
			break;
		case PURPLE:
			cout << "  (PURPLE)";
			break;
		case YELLOW:
			cout << "  (YELLOW)";
			break;
		default:
			cout << "???";
			break;
		}
		cout << endl << '\t';
		cout << CStr(">CHEAT MOD", color);
		switch (CheatMod) {
		case 0:
			cout << CStr("  (OFF)", color);
			break;
		case 1:
			cout << CStr("  (ON)", color);
		}
		cout << endl << '\t';
		cout << "BACK";
		break;
	case 2:
		cout << endl << '\t';
		cout << "COLOR";
		switch (color)
		{
		case BLUE:
			cout << "  (BLUE)";
			break;
		case GREEN:
			cout << "  (GREAN)";
			break;
		case CIAN:
			cout << "  (CIAN)";
			break;
		case RED:
			cout << "  (RED)";
			break;
		case PURPLE:
			cout << "  (PURPLE)";
			break;
		case YELLOW:
			cout << "  (YELLOW)";
			break;
		default:
			cout << "???";
			break;
		}
		cout << endl << '\t';
		cout << "CHEAT MOD";
		switch (CheatMod) {
		case 0:
			cout << "  (OFF)";
			break;
		case 1:
			cout << "  (ON)";
		}
		cout << endl << '\t';
		cout << CStr(">BACK", color);
		break;
	}
	cout << endl << endl;
	cout << "\tW - UP;   S - DOWN;   F - SELECT";

	bool back = 0;
	int min = 0, max = 2;

	while (!back) {
		int preOption = option;
		if (GetKeyState('W') & 0x8000) {
			if (option != min)
				option--;
			else
				option = max;
			while (GetKeyState('W') & 0x8000); // Я сам додумался ＼(￣▽￣)／
		}
		else if (GetKeyState('S') & 0x8000) {
			if (option != max)
				option++;
			else option = min;
			while (GetKeyState('S') & 0x8000);
		}
		

		if (option != preOption) {
			system("cls");
			switch (option) {
			case 0:	// Color
				cout << endl << '\t';
				cout << CStr(">COLOR", color);
				switch (color)
				{
				case BLUE:
					cout << CStr("  (BLUE)", color);
					break;
				case GREEN:
					cout << CStr("  (GREAN)", color);
					break;
				case CIAN:
					cout << CStr("  (CIAN)", color);
					break;
				case RED:
					cout << CStr("  (RED)", color);
					break;
				case PURPLE:
					cout << CStr("  (PURPLE)", color);
					break;
				case YELLOW:
					cout << CStr("  (YELLOW)", color);
					break;
				default:
					cout << "???";
					break;
				}
				cout << endl << '\t';
				cout << "CHEAT MOD";
				switch (CheatMod) {
				case 0:
					cout << "  (OFF)";
					break;
				case 1:
					cout << "  (ON)";
				}
				cout << endl << '\t';
				cout << "BACK";
				break;
			case 1:	//Cheat mod
				cout << endl << '\t';
				cout << "COLOR";
				switch (color)
				{
				case BLUE:
					cout << "  (BLUE)";
					break;
				case GREEN:
					cout << "  (GREAN)";
					break;
				case CIAN:
					cout << "  (CIAN)";
					break;
				case RED:
					cout << "  (RED)";
					break;
				case PURPLE:
					cout << "  (PURPLE)";
					break;
				case YELLOW:
					cout << "  (YELLOW)";
					break;
				default:
					cout << "???";
					break;
				}
				cout << endl << '\t';
				cout << CStr(">CHEAT MOD", color);
				switch (CheatMod) {
				case 0:
					cout << CStr("  (OFF)", color);
					break;
				case 1:
					cout << CStr("  (ON)", color);
				}
				cout << endl << '\t';
				cout << "BACK";
				break;
			case 2:
				cout << endl << '\t';
				cout << "COLOR";
				switch (color)
				{
				case BLUE:
					cout << "  (BLUE)";
					break;
				case GREEN:
					cout << "  (GREAN)";
					break;
				case CIAN:
					cout << "  (CIAN)";
					break;
				case RED:
					cout << "  (RED)";
					break;
				case PURPLE:
					cout << "  (PURPLE)";
					break;
				case YELLOW:
					cout << "  (YELLOW)";
					break;
				default:
					cout << "???";
					break;
				}
				cout << endl << '\t';
				cout << "CHEAT MOD";
				switch (CheatMod) {
				case 0:
					cout << "  (OFF)";
					break;
				case 1:
					cout << "  (ON)";
				}
				cout << endl << '\t';
				cout << CStr(">BACK", color);
				break;
			}
			cout << endl << endl;
			cout << "\tW - UP;   S - DOWN;   F - SELECT";
		}
		else if (GetKeyState('F') & 0x8000) {
			while (GetKeyState('F') & 0x8000);
			system("cls");
			return option;
		}
	}
}
