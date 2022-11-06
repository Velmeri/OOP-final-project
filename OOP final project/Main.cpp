#include <iostream>
#include "Menu.h"

using namespace std;

int main() {
	Menu menu;
	while (1) {
		switch (menu.Main()) {
		case 0: //START
			switch (menu.START()) {
			case 0: //SINGLE PLAYER MOD
				menu.SP();
				break;
			case 2: // BACK
				break;
			default:
				cout << CStr("unknown value", 4);
			}
			break;
		case 1: //OPTIONS
			break;
		case 2: //EXIT
			return 0;
		default:
			cout << CStr("unknown value", 4);
		}
	}
	return 0;
}