#include <iostream>

using namespace std;

double exponentiation(int number, int power) {
	double result = 1;
	for (int i = 0; i < abs(power); i++) {
		result = result * number;
	}
	if (power <= 0) {
		return 1/result;
	}
	else {
		return result;
	}
}

int factorial(int number) {
	int result = 1;
	for (int i = 1; i < number + 1; i++) {
		result = result * i;
	}
	return result;
}

double sqrt(int number) {
	if (number == 0) {
		return 0;
	}
	if (number < 0) {
		cout << "wrong type" << endl;
		return 00;
	}
	double result = 1, k = 0;
	while (result != k)
	{
		k = result;
		result = (k + number / k) / 2.0;
	}
	return result;
}

bool prime(int number) {
	for (int i = 2; i <= sqrt(number); i++) {
		if (number % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	cout << exponentiation(8, 2) << endl;
	cout << factorial(-5) << endl;
	cout << sqrt(9) << endl;
	cout << prime(25) << endl;
	return 0;
}
