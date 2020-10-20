#include <iostream> 
#include <conio.h> 
using namespace std;
int main()
{
	double num_1, num_2, value = 1;
	char  znak, ch = 1;
	do
	{
		cout << "Write number 1: ";
		while (!(cin >> num_1))
		{
			cout << "wrong type" << endl;
			cout << "Write number 1: ";
			cin.clear();
			cin.ignore();
		}
		cout << "Write number 2: ";
		while (!(cin >> num_2))
		{
			cout << "wrong type" << endl;
			cout << "Write number 2: ";
			cin.clear();
			cin.ignore();
		}
		cout << "Operecion: ";
		cin >> znak;
		while (znak != '+' && znak != '-' && znak != '*' && znak != '/')
		{
			cout << "error" << endl;
			cout << "Operecion: ";
			cin >> znak;
			if (znak == '+' || znak == '-' || znak == '*' || znak == '/')
				break;
		}
		switch (znak)
		{
		case '+': value = num_1 + num_2;
			break;
		case '-': value = num_1 - num_2;
			break;
		case '*': value = num_1 * num_2;
			break;
		case '/': value = num_1 / num_2;
			break;
		default: cout << "Error";
		}
		cout << "Value = " <<value << endl;
		cout << "Press esc to exit or enter" << endl;
		ch = _getch();

	} while (ch != 27);
	system("PAUSE");
}
