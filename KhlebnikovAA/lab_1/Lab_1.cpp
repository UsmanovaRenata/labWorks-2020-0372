#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double first_number, second_number,s=1, cont=1;
	char symbol;
	while (s==1)
	{
		cout << "Введите первое число: " << endl;
		cin >> first_number;
		cout << "Введите знак: " << endl;
		cin >> symbol;
		cout << "Введите второе число: " << endl;
		cin >> second_number;
		switch (symbol) {
		case '+':cout << "Сумма чисел равна: " << first_number + second_number << endl; break;
		case '-':cout << "Разность чисел равна: " << first_number - second_number << endl; break;
		case '*':cout << "Произведение чисел равна: " << first_number * second_number << endl; break;
		case '/':
			if (second_number == 0) {
				cout << "Делить на 0 нельзя!" << endl; break;
			}
			else {
				cout << "Частное чисел равна: " << first_number / second_number << endl; break;
			}
		default:cout << "Вы выбрали неправильный знак." << endl; break;
		}
		cout << "Продолжить работу?\nВведите число:\n1)ДА.        2)НЕТ.\n";
		cin >> cont;
		if (cont==2) {
			s=0;
		}	
	}
	system("pause");
	return 0;
}

