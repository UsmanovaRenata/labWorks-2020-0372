#include <iostream>
#include <conio.h>

const int ROWS1 = 2;
const int COLS1 = 3;
const int ROWS2 = 2;
const int COLS2 = 3;

void printMatrix(int matrix[ROWS1][COLS2]) {
	std::cout << "Result Matrix:" << std::endl;

	for (int i = 0; i < ROWS1; i++) {
		for (int j = 0; j < COLS2; j++) {
			std::cout << matrix[i][j] << "\t";
		}
		std::cout << std::endl;
	}
}

int sum(int matrix1[ROWS1][COLS1], int matrix2[ROWS2][COLS2], int resMatrix[ROWS1][COLS2]) {
	if (ROWS1 != ROWS2 || COLS1 != COLS2) {
		std::cout << "Matrices can't be summed!" << std::endl;
		return 1;
	}
	for (int i = 0; i < ROWS1; i++) {
		for (int j = 0; j < COLS1; j++) {
			resMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
	printMatrix(resMatrix);
	return 0;
}

int sub(int matrix1[ROWS1][COLS1], int matrix2[ROWS2][COLS2], int resMatrix[ROWS1][COLS2]) {
	if (ROWS1 != ROWS2 || COLS1 != COLS2) {
		std::cout << "Matrices can't be subtracted!" << std::endl;
		return 1;
	}
	for (int i = 0; i < ROWS1; i++) {
		for (int j = 0; j < COLS1; j++) {
			resMatrix[i][j] = matrix1[i][j] - matrix2[i][j];
		}
	}
	printMatrix(resMatrix);
	return 0;
}

int product(int matrix1[ROWS1][COLS1], int matrix2[ROWS2][COLS2], int resMatrix[ROWS1][COLS2]) {
	if (COLS1 != ROWS2) {
		std::cout << "Matrices can't be producted!" << std::endl;
		return 1;
	}
	for (int i = 0; i < ROWS1; i++) {
		for (int j = 0; j < COLS2; j++) {
			resMatrix[i][j] = 0;
			for (int z = 0; z < ROWS2; z++) {
				resMatrix[i][j] += matrix1[i][z] * matrix2[z][j];
			}
		}
	}
	printMatrix(resMatrix);
	return 0;
}

int main() {
	int matrix1[ROWS1][COLS1],
		matrix2[ROWS2][COLS2],
		resMatrix[ROWS1][COLS2],
		choice;

	while (true) {
	//Matrices definition
	for (int i = 0; i < ROWS1; i++) {
		for (int j = 0; j < COLS1; j++) {
			std::cout << "Type value of the matrix1[" << i + 1 << "][" << j + 1 << "]: ";
			std::cin >> matrix1[i][j];
		}
	}

	for (int i = 0; i < ROWS2; i++) {
		for (int j = 0; j < COLS2; j++) {
			std::cout << "Type value of the matrix2[" << i + 1 << "][" << j + 1 << "]: ";
			std::cin >> matrix2[i][j];
		}
	}

	//Operations
	std::cout << "\nAvailable Operations:\n\tFind Sum - 1\n\tFind Difference - 2\n\tFind Production - 3\nSelect the operation: ";
	std::cin >> choice;
	
		switch (choice) {
		case 1:
			sum(matrix1, matrix2, resMatrix);
			break;
		case 2:
			sub(matrix1, matrix2, resMatrix);
			break;
		case 3:
			product(matrix1, matrix2, resMatrix);
			break;
		default:
			std::cout << "The operation does not exist!" << std::endl;
			std::cin >> choice;
			continue;
		}

		std::cout << "Tap any key to continue or <ESC> to stop." << std::endl;
		if (_getch() == 27) { break; }
	}

	system("pause");
	return 0;
}