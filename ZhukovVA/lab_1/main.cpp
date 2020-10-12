#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	float num1, num2;
	char op;
	int esc;

	do {
		system("cls");
		cout << "Type two numbers and an operator in the following format 'Number_1 <Operator> Number_2': ";
		cin >> num1 >> op >> num2;

		switch (op) {
		case '+':
			cout << "Result: " << num1 + num2;;
			break;
		case '-':
			cout << "Result: " << num1 - num2;;
			break;
		case '*':
			cout << "Result: " << num1 * num2;;
			break;
		case '/':
			if (!num2) {
				cout << "Dividing by zero!";
			} else {
				cout << "Result: " << num1 / num2;
			}
			break;
		default:
			cout << "The operator does not exist!";
		}

		cout << "\nPress any key to continue or <ESC> to exit...";
		esc = _getch();
	} while (esc != 27);

	return 0;
}