#include <iostream>
#include <conio.h>
char escape;
using namespace std;
int main() {
	float number1;
	float number2;
	float result;
	char sign;
	do {
		cout << "Enter the first number" << endl;
		while (!(cin >> number1)) {
			cout << "Wrong type" << endl;
			cin.clear();
			cin.ignore();
		}
		cout << "Enter the second number" << endl;
		while (!(cin >> number2)) {
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
		switch (sign) {
		case '+':
			result = number1 + number2;
			cout << result << endl;
			break;
		case '-':
			result = number1 - number2;
			cout << result << endl;
			break;
		case '*':
			result = number1 * number2;
			cout << result << endl;
			break;
		case '/':
			if (number2 != 0) {
				result = number1 / number2;
				cout << result << endl;
			}
			else {
				cout << "Action is impossible" << endl;
			}
			break;
		default:
			cout << "Error" << endl;
		}
		cout << "Press esc to exit or any other key to continue" << endl;
		escape = _getch();
	} while (escape != 27);
}