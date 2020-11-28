#include<conio.h>
#include <iostream>
using namespace std;
int main() {
	char ch;
	do {
		float first_number;
		float second_number;
		char sign;
		cout << "Enter two numbers and a sign:" << endl;
		while (!(cin >> first_number)) {
			cout.clear();
			cout << "Wrong type" << endl;
			cin.clear();
			cin.ignore();
		}
		cin >> second_number >> sign;
		switch (sign) {
		case '*':
			cout << "result:" << first_number * second_number << endl;
			break;
		case '+':
			cout << "result:" << first_number + second_number << endl;
			break;
		case '-':
			cout << "result:" << first_number - second_number << endl;
			break;
		case '/':
			if (second_number != 0) {
				cout << "result:" << first_number / second_number << endl;
			}
			if (second_number == 0) {
				cout << "You can't divide by zero " << endl;
			}
			break;
		default:
			cout << "sign unrecognized" << endl;
		}
		cout << "Press esc, if you want exit or press any key to try again" << endl;
		ch = _getch();
	} while (ch != 27);
	system("pause");
	return 0;
}