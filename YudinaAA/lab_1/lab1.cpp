#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	char ch; do {
		double number1;
		double number2;
		char sign;

		while (!(cin >> number1 >> sign >> number2)) { 
			cout << "Wrong type" << endl;
			cout << "press esc if you are finished";
			cin.clear();
			cin.ignore();
		}


		switch (sign) {
		case '+':
			std::cout << "result: " << number1 + number2 << endl;
				cout << "press esc if you are finished";
			break;
		case '-':
			std::cout << "result: " << number1 - number2 << endl;
			cout << "press esc if you are finished";
			break;
		case '*':
			std::cout << "result: " << number1 * number2 << endl;
			cout << "press esc if you are finished";
			break;
		case '/':
			if (number2 == 0) {
			cout << "wrong type" << endl;
			cout << "press esc if you are finished"<< endl;
		}
				else {
			std::cout << "result: " << number1 / number2 << endl;
			cout << "press esc if you are finished";
		}
			break;
		default:
			std::cout << "sign unrecognised" <<  endl;
			cout << "press esc if you are finished";

		}


		ch = _getch();
	} while (ch != 27);
	return(0);
}
