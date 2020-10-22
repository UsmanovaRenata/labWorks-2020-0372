#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	setlocale(0, "");
	float chislo_1, chislo_2;
	char znak;
	int escape;

	do {
		cout << "Введите 2 числа и знак: ";
		cin >> chislo_1 >> chislo_2 >> znak;

		switch (znak)
		{
		case '*':
			cout << "Произведение равно: " << chislo_1 * chislo_2 << endl;
			break;
		case '+':
			cout << "Сумма равна: " << chislo_1 + chislo_2 << endl;
			break;
		case '-':
			cout << "Разность равна: " << chislo_1 - chislo_2 << endl;
			break;
		case '/':
			if (chislo_2 != 0)
			{
				cout << "Частное равно: " << chislo_1 / chislo_2 << endl;
			}
			else
			{
				cout << "Ошибка. Деление на ноль." << endl;
			}
			break;
		default:
			cout << "Введите допустимый знак." << endl;
			break;
		}

		cout << "Для продолжения нажмите любую клавишу. Чтобы выйти, нажмите <escape>...\n" << endl;
		escape = _getch();
	} while (escape != 27);

	cout << "Программа завершена." << endl;
	return 0;
}
