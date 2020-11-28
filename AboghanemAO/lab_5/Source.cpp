#include <iostream>
#include <conio.h>
using namespace std;
const int rows = 2, columns = 3;




void print_answer(int answer[rows][columns]) {
	std::cout << "Result :" << std::endl;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			std::cout << answer[i][j] << "  ";
		}
		std::cout << std::endl;
	}
}

void Multiplication(int matrix_1[rows][columns], int matrix_2[rows][columns], int answer[rows][columns]) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			answer[i][j] = 0;
			for (int z = 0; z < rows; z++) {
				answer[i][j] += matrix_1[i][z] * matrix_2[z][j];
			}
		}
	}
	print_answer(answer);
}



void sum(int matrix_1[rows][columns], int matrix_2[rows][columns], int answer[rows][columns]){
	
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			answer[i][j] = matrix_1[i][j] + matrix_2[i][j];
		}
	}
	print_answer(answer);
	
}

void Subtraction(int matrix_1[rows][columns], int matrix_2[rows][columns], int answer[rows][columns]) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			answer[i][j] = matrix_1[i][j] - matrix_2[i][j];
		}
	}
	print_answer(answer);
	
}




int main() {
	int matrix_1[rows][columns];
	int matrix_2[rows][columns];
	int answer[rows][columns];
	int operation;
	char end_pro;

	bool right_input = true;




	do {
		std::cout << "Enter first matrix : \n";
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				std::cout << "Enter the value of matrix_1" << i + 1 << "][" << j + 1 << "] : ";
				std::cin >> matrix_1[i][j];
			}
		}
		std::cout << "enter second matrix : \n";
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				std::cout << "Enter the value of matrix_2[" << i + 1 << "][" << j + 1 << "] : ";
				std::cin >> matrix_2[i][j];
			}
		}


		std::cout << "Choice what operation to carry out :\n1) Multiplication\n2) Addition\n3) Subtraction \n";
		std::cin >> operation;


		do {
			switch (operation)
			{
			case 1:
				Multiplication(matrix_1, matrix_2, answer);
				break;

			case 2:
				sum(matrix_1, matrix_2, answer);
				break;

			case 3:
				Subtraction(matrix_1, matrix_2, answer);
				break;

			default:
				std::cout << "wrong input operation try agin";
				right_input = false;
				break;
			}
		} while (!right_input);
		


		std::cout << "press ESC to close the program or anything else to continue : ";
		end_pro = _getch();
		std::cout << "\n";
	} while (end_pro != 27);

	std::cout << "\n";
	return 0;
}