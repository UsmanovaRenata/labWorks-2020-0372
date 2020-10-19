#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	float Number_1, Number_2;
	char Operator;
	int Escape;

	do {
		system("cls");

		cout << "Type two numbers and an operator in the following format 'Number_1 <Operator> Number_2': ";
		cin >> Number_1 >> Operator >> Number_2;

		cout << "Result: ";
		switch (Operator) {
		case '+':
			cout << Number_1 + Number_2;
			break;
		case '-':
			cout << Number_1 - Number_2;
			break;
		case '*':
			cout << Number_1 * Number_2;
			break;
		case '/':
			if (!Number_2) {
				cout << "Dividing by zero!";
			} else {
				cout << Number_1 / Number_2;
			}
			break;
		default:
			cout << "The operator does not exist!";
		}

		cout << "\nPress any key to continue or <ESC> to exit...";
		Escape = _getch();
	} while (Escape != 27);

	return 0;
}