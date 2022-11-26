#include <iostream>
#include "Menu.h"

using namespace std;

int main() {
	srand(time(NULL));
	Menu menu;
	while (1) {
		switch (menu.Main()) {
		case 0: //START
			menu.SP();
			break;
		case 1: //OPTIONS
		{
			bool back = 0;
			short option = 0;
			while(!back)
			switch (menu.Option(option)) {
			case 0:	//COLOR
				menu.SetColor(menu.GetColor() + 1);
				option = 0;
				break;
			case 1: //Cheat mod
				menu.ChaetModSwitch();
				option = 1;
				break;
			case 2: //Back
				back = !back;
				break;
			default:
				cout << CStr("unknown value", 4);
			}
			break;
		}

		case 2: //EXIT
			return 0;
		default:
			cout << CStr("unknown value", 4);
		}
	}
	return 0;
}