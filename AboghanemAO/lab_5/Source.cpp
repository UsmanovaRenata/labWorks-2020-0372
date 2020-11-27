#include <iostream>
#include <time.h>


int main() {
	srand(time(NULL));
	
	
	int arr1[5];
	int arr2[5];
	int operation;
	bool wrong_input = false;

	std::cout << "enter first arr : ";
	for (int i = 0; i < 5 ; i++) {
		std::cin >> arr1[i];
	
	}
	std::cout << "enter second arr : ";
	for (int i = 0; i < 5; i++) {
		std::cin >> arr2[i];

	}


	do {
		std::cout << "choice what operation to carry out :\n1) Multiplication\n2) Addition\n3) Subtraction \n";
		std::cin >> operation;

		switch (operation)
		{
		case 1:
			std::cout << "Multiplication : ";
			for (int i = 0; i < 5; i++) {
				std::cout << arr1[i] * arr2[i] << ' ';
			}
			break;

		case 2:
			std::cout << "Addition : ";
			for (int i = 0; i < 5; i++) {
				std::cout << arr1[i] + arr2[i] << ' ';
			}
			break;

		case 3:
			std::cout << "Subtraction : ";
			for (int i = 0; i < 5; i++) {
				std::cout << arr1[i] - arr2[i] << ' ';
			}
			break;

		default:
			wrong_input = true;
			std::cout << "wrong input operation try agin";
			break;
		}

	} while (wrong_input);
	

	



	std::cout << "\n";
	system("pause");
	return 0;
}