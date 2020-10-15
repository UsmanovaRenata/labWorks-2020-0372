#include <iostream> 
#include <conio.h> 
using namespace std;
int main()
{
	double a, b, c = 1;
	char z, ch = 1;
	do
	{
		cout << "Write number 1: ";
		while (!(cin >> a))
		{
			cout << "wrong type" << endl;
			cout << "Write number 1: ";
			cin.clear();
			cin.ignore();
		}
		cout << "Write number 2: ";
		while (!(cin >> b))
		{
			cout << "wrong type" << endl;
			cout << "Write number 2: ";
			cin.clear();
			cin.ignore();
		}
		cout << "Operecion: ";
		cin >> z;
		while (z != '+' && z != '-' && z != '*' && z != '/')
		{
			cout << "error" << endl;
			cout << "Operecion: ";
			cin >> z;
			if (z == '+' && z == '-' && z == '*' && z == '/')
				break;
		}
		switch (z)
		{
		case '+': c = a + b;
			break;
		case '-': c = a - b;
			break;
		case '*': c = a * b;
			break;
		case '/': c = a / b;
			break;
		default: cout << "Error";
		}
		cout << c << endl;
		cout << "Press esc to exit or enter" << endl;
		ch = _getch();

	} while (ch != 27);
	system("PAUSE");
}
