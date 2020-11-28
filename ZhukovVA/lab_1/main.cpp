#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	float operand_1, operand_2;
	char operation_sign;
	int escape;

	do {
		system("cls");

		cout << "Type two numbers and an operator in the following format 'operand_1 <operator> operand_2': ";
		cin >> operand_1 >> operation_sign >> operand_2;

		cout << "Result: ";
		switch (operation_sign) {
		case '+':
			cout << operand_1 + operand_2;
			break;
		case '-':
			cout << operand_1 - operand_2;
			break;
		case '*':
			cout << operand_1 * operand_2;
			break;
		case '/':
			if (!operand_2) {
				cout << "Dividing by zero!";
			} else {
				cout << operand_1 / operand_2;
			}
			break;
		default:
			cout << "The operator does not exist!";
		}

		cout << "\nPress any key to continue or <escape> to exit...";
		escape = _getch();
	} while (escape != 27);

	return 0;
}