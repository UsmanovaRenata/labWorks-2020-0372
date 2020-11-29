#include <iostream>
#include <conio.h>
using namespace std;


int main()
{
	float num_1, num_2, result;
	char ch, oper;
	bool correct;

	do {
		correct = true;
		cout << "Enter your numbers\n";
		cout << "First:\n";
		while (!(cin >> num_1)) {
			cout << "Incorrect type\n";
			cin.clear();
			cin.ignore();
		}

		cout << "Second:\n";
		while (!(cin >> num_2)) {
			cout << "Incorrect type\n";
			cin.clear();
			cin.ignore();
		}
		cout << "Select operation(+,-,*,/):\n";
		cin >> oper;

		switch (oper){
		case '+':result = num_1 + num_2; break;
		case '-':result = num_1 - num_2; break;
		case '*':result = num_1 * num_2; break;
		case '/':
			if (num_2 != 0) {
				result = num_1 / num_2; break;
			}
		default: 
			correct = false;
			cout << "Invalid request!\n";
		}

		if (correct == true) {
			cout << num_1 << oper << num_2 << "=" << result << endl;
		}

		cout << "Press esc to exit...\n";
		cout << "Press any key to continue...\n";

		ch = _getch();

	} while (ch != 27);

}