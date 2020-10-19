#include <iostream>
#include <iostream>
#include <conio.h>
char ch;
using namespace std;
int main() {
	float a1;
	float a2;
	float res;
	char sign;
	do {
		cout << "Enter the first number" << endl;
		while (!(cin >> a1)) {
			cout << "Wrong type" << endl;
			cin.clear();
			cin.ignore();
		}
		cout << "Enter the second number" << endl;
		while (!(cin >> a2)) {
			cout << "Wrong type" << endl;
			cin.clear();
			cin.ignore();
		}
		cout << "Enter sign" << endl;
		while (!(cin >> sign)) {
			cout << "Wrong type" << endl;
			cin.clear();
			cin.ignore();
		}
		if (sign == '+') {
			res = a1 + a2;
			cout << res << endl;
		}
		if (sign == '-') {
			res = a1 - a2;
			cout << res << endl;
		}
		if (sign == '*') {
			res = a1 * a2;
			cout << res << endl;
		}
		if (sign == '/') {
			if (a2 != 0) {
				res = a1 / a2;
				cout << res << endl;
			}
			else {
				cout << "Action is impossible" << endl;
			}
		}
		cout << "Press esc to exit or any other key to continue" << endl;
		ch = _getch();
	} while (ch != 27);
}