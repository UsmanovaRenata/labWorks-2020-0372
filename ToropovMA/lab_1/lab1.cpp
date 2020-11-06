#include <iostream>
#include <conio.h>

double getValue()
{
	double x;
	while (true)
	{
		std::cin >> x;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			std::cout << "Some error occured, please try again...\n";
		}
		else
		{
			std::cin.ignore(10000, '\n');
			return x;
		}
	}
}

char getOperation()
{
	char x;

	while (true)
	{
		std::cin >> x;
		if (x == '+' || x == '-' || x == '*' || x == '/')
		{
			std::cin.ignore(10000, '\n');
			return x;
		}
		else
		{
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			std::cout << "Some error occured, please try again...\n";
		}
	}
}

void printResult(double num1, char oper, double num2)
{
	std::cout << "Result:\n";
	switch (oper)
	{
	case '+':
		std::cout << num1 + num2 << '\n';
		break;
	case '-':
		std::cout << num1 - num2 << '\n';
		break;
	case '*':
		std::cout << num1 * num2 << '\n';
		break;
	case '/':
		if (num2 == 0)
		{
			std::cout << "Cannot be divided by 0. Try again\n";
			break;
		}
		else
		{
			std::cout << num1 / num2 << '\n';
			break;
		}
	}
}

int main()
{
	char key_check;

	do
	{
		system("cls");

		std::cout << "Enter first number:\n";
		double number_1 = getValue();
		std::cout << "Choose operation (+, -, *, /):\n";
		char operation = getOperation();
		std::cout << "Enter second number:\n";
		double number_2 = getValue();

		printResult(number_1, operation, number_2);

		std::cout << "Press ESC to stop.\nPress any button to continue\n\n";
		key_check = _getch();
	} while (key_check != 27);
}
