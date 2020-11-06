#include <iostream>
#include <conio.h>

double getValue()
{
	while (true)
	{
		std::cout << "Enter double: ";
		double x;
		std::cin >> x;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "Woopsie... some error occured... try again\n";
		}
		else
		{
			std::cin.ignore(32767, '\n');
			return x;
		}
	}
}

char getOperation()
{
	while (true)
	{
		std::cout << "Choose operation (+, -, *, /): ";
		char sm;
		std::cin >> sm;
		if (sm == '+' or sm == '-' or sm == '*' or sm == '/')
		{
			return sm;
		}
		else
		{
			std::cout << "Woopsie, something gone wrong, try again...\n";
			std::cin.ignore(32767, '\n');
		}

	}
}

void printResult(double a, char sm, double b)
{
	if (sm == '+')
	{
		std::cout << "Result: " << a + b << "\n";
	}
	else if (sm == '-')
	{
		std::cout << "Result: " << a - b << "\n";
	}
	else if (sm == '*')
	{
		std::cout << "Result: " << a * b << "\n";
	}
	else if (sm == '/')
	{
		std::cout << "Result: " << a / b << "\n";
	}
}

int main()
{
	char key_check;
	do
	{
		double num1 = getValue();
		char operation = getOperation();
		double num2 = getValue();

		printResult(num1, operation, num2);

		std::cout << "Press any button to continue.\nPress ESC to end\n\n";
		key_check = _getch();
	} while (key_check != 27);
