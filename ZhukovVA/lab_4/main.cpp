#include <iostream>
#include <math.h> //For number flooring

//Exponentiate number to the integer power
double power(int num, int power) {
	double result = 1;
	for (int i = 0; i < abs(power); i++) {
		result *= num;
	}
	return (power >= 0) ? result : 1/result;
}

//Get the factorial of the integer
unsigned int factorial(int num) {
	if (!num) { return 1; }
	if (num < 0) { return -1; }
	unsigned int result = 1;
	for (int i = 1; i < num + 1; i++) {
		result *= i;
	}
	return result;
}

//Get square root of the number with Newton's Method
double squareroot(int num) {
	if (num == 0) return 0;
	if (num < 0) return -1;
	double result;
	double nx = 1;				//Start point
	int iter = 0;				//Loop restriction

	while (iter < 20 || result != nx) {
		result = nx;
		nx = (result + num / result) / 2.0;
		iter++;
	}
	return result;
}

//Check whether the number is prime or not
bool is_prime(int num) {
	if (num <= 1) return false;

	for (int i = 2; i < floor(squareroot(num)) + 1; i++) {
		if (num % i == 0) return false;
	}

	return true;
}

int main() {
	std::cout << "##### Exponentiation #####" << std::endl;
	std::cout << "1. 1^5 = 1" << "\t\t" << (1 == power(1, 5) ? "True" : "False") << std::endl;
	std::cout << "2. 5^0 = 1" << "\t\t" << (1 == power(5, 0) ? "True" : "False") << std::endl;
	std::cout << "3. 2^8 = 256" << "\t\t" << (256 == power(2, 8) ? "True" : "False") << std::endl;
	std::cout << "4. -3^5 = -243" << "\t\t" << (-243 == power(-3, 5) ? "True" : "False") << std::endl;
	std::cout << "5. 2^(-2) = 0.25" << "\t" << (0.25 == power(2, -2) ? "True" : "False") << std::endl;
	std::cout << "6. 0^5 = 0" << "\t\t" << (0 == power(0, 5) ? "True" : "False") << std::endl;
	std::cout << "7. 5^(-1) = 0.2" << "\t\t" << (0.2 == power(5, -1) ? "True" : "False") << std::endl;

	std::cout << "\n##### Factorial #####" << std::endl;
	std::cout << "1. 0! = 1" << "\t\t" << (1 == factorial(0) ? "True" : "False") << std::endl;
	std::cout << "2. 5! = 120" << "\t\t" << (120 == factorial(5) ? "True" : "False") << std::endl;
	std::cout << "3. -5! = None" << "\t\t" << (-1 == factorial(-5) ? "True" : "False") << std::endl;
	std::cout << "4. 1 = 1" << "\t\t" << (1 == factorial(1) ? "True" : "False") << std::endl;
	std::cout << "5. 12! = 479001600" << "\t" << (479001600 == factorial(12) ? "True" : "False") << std::endl;

	std::cout << "\n##### Square Root #####" << std::endl;
	std::cout << "1. 25 = 5" << "\t\t" << (5 == squareroot(25) ? "True" : "False") << std::endl;
	std::cout << "2. 0 = 0" << "\t\t" << (0 == squareroot(0) ? "True" : "False") << std::endl;
	std::cout << "3. 23 = " << squareroot(23) << "\t\t" << "True" << std::endl;
	std::cout << "4. -49 = None" << "\t\t" << (-1 == squareroot(-49) ? "True" : "False") << std::endl;
	std::cout << "5. 65536 = 256" << "\t\t" << (256 == squareroot(65536) ? "True" : "False") << std::endl;

	std::cout << "\n##### Is Prime #####" << std::endl;
	std::cout << "1. 1 = Not Prime" << "\t" << (!is_prime(1) ? "True" : "False") << std::endl;
	std::cout << "2. -5 = Not Prime" << "\t" << (!is_prime(-5) ? "True" : "False") << std::endl;
	std::cout << "3. 4 = Not Prime" << "\t" << (!is_prime(4) ? "True" : "False") << std::endl;
	std::cout << "4. 7 = Prime" << "\t\t" << (is_prime(7) ? "True" : "False") << std::endl;
	std::cout << "5. 25 = Not Prime" << "\t" << (!is_prime(25) ? "True" : "False") << std::endl;
	std::cout << "6. 997 = Prime" << "\t\t" << (is_prime(997) ? "True" : "False") << std::endl;

	system("pause");
	return 0;
}