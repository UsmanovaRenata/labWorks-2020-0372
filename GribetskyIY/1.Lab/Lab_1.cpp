#include <iostream>
#include <conio.h>
using namespace std;
float a, b, c;
char ch, oper;
bool correct;

int main()
{

	do {
		correct = true;
		cout << "Enter your numbers\n";
		cout << "First:\n";
		while (!(cin >> a)) {
			cout << "Incorrect type\n";
			cin.clear();
			cin.ignore();
		}

		cout << "Second:\n";
		while (!(cin >> b)) {
			cout << "Incorrect type\n";
			cin.clear();
			cin.ignore();
		}
		cout << "Select operation(+,-,*,/):\n";
		cin >> oper;

		switch (oper){
		case '+':c = a + b; break;
		case '-':c = a - b; break;
		case '*':c = a * b; break;
		case '/':
			if (b != 0) {
				c = a / b; break;
			}
		default: 
			correct = false;
			cout << "Invalid request!\n";
		}

		if (correct == true) {
			cout << a << oper << b << "=" << c << endl;
		}

		cout << "Press esc to exit...\n";
		cout << "Press any key to continue...\n";

		ch = _getch();

	} while (ch != 27);

}