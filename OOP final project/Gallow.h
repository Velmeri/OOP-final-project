#pragma once
#include < iostream>

using namespace std;

class Gallow
{
	int stage;
public:
	Gallow() { stage = 0; }
	void operator ++ () { ++stage; }
	void operator ++ (int a) { stage++; }
	void Draw() {
		switch (stage) {
		case 0:
			cout << "\t  _______\n";
			cout << "\t  |/     |\n";
			cout << "\t  |\n";
			cout << "\t  |\n";
			cout << "\t  |\n";
			cout << "\t  |\n";
			cout << "\t  |\n";
			cout << "\t  |\n";
			cout << "\t  |\n";
			cout << "\t__|________\n";
			cout << "\t|         |\n";
			break;
		case 1:
			cout << "\t  _______\n";
			cout << "\t  |/     |\n";
			cout << "\t  |     (_)\n";
			cout << "\t  |\n";
			cout << "\t  |\n";
			cout << "\t  |\n";
			cout << "\t  |\n";
			cout << "\t  |\n";
			cout << "\t  |\n";
			cout << "\t__|________\n";
			cout << "\t|         |\n";
			break;
		case 2:
			cout << "\t  _______\n";
			cout << "\t  |/     |\n";
			cout << "\t  |     (_)\n";
			cout << "\t  |      |\n";
			cout << "\t  |      |\n";
			cout << "\t  |      |\n";
			cout << "\t  |\n";
			cout << "\t  |\n";
			cout << "\t  |\n";
			cout << "\t__|________\n";
			cout << "\t|         |\n";
			break;
		case 3:
			cout << "\t  _______\n";
			cout << "\t  |/     |\n";
			cout << "\t  |     (_)\n";
			cout << "\t  |     _|\n";
			cout << "\t  |    / |\n";
			cout << "\t  |      |\n";
			cout << "\t  |\n";
			cout << "\t  |\n";
			cout << "\t  |\n";
			cout << "\t__|________\n";
			cout << "\t|         |\n";
			break;
		case 4:
			cout << "\t  _______\n";
			cout << "\t  |/     |\n";
			cout << "\t  |     (_)\n";
			cout << "\t  |     _|_\n";
			cout << "\t  |    / | \\\n";
			cout << "\t  |      |\n";
			cout << "\t  |\n";
			cout << "\t  |\n";
			cout << "\t  |\n";
			cout << "\t__|________\n";
			cout << "\t|         |\n";
			break;
		case 5:
			cout << "\t  _______\n";
			cout << "\t  |/     |\n";
			cout << "\t  |     (_)\n";
			cout << "\t  |     _|_\n";
			cout << "\t  |    / | \\\n";
			cout << "\t  |      |\n";
			cout << "\t  |	/\n";
			cout << "\t  |    /\n";
			cout << "\t  |\n";
			cout << "\t__|________\n";
			cout << "\t|         |\n";
			break;
		case 6:
			cout << "\t  _______\n";
			cout << "\t  |/     |\n";
			cout << "\t  |     (_)\n";
			cout << "\t  |     _|_\n";
			cout << "\t  |    / | \\\n";
			cout << "\t  |      |\n";
			cout << "\t  |	/ \\\n";
			cout << "\t  |    /   \\\n";
			cout << "\t  |\n";
			cout << "\t__|________\n";
			cout << "\t|         |\n";
			break;
		default:
			cout << "\t  _______\n";
			cout << "\t  |/     |\n";
			cout << "\t  |     (_)\n";
			cout << "\t  |     _|_\n";
			cout << "\t  |    / | \\\n";
			cout << "\t  |      |\n";
			cout << "\t  |	/ \\\n";
			cout << "\t  |    /   \\\n";
			cout << "\t  |\n";
			cout << "\t__|________\n";
			cout << "\t|         |\n";
			break;
		}
	}
};

