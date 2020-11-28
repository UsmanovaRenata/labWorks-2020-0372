#include <iostream>
#include <stdio.h>
#include <conio.h>
const int  Razmer = 15;

void vivod(double Matrix[Razmer][Razmer])
{
	for (int i = 0; i < Razmer; i++)
	{
		for (int j = 0; j < Razmer; j++)
		{
			std::cout << Matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}

}

void proizvedenie(double Matrix[Razmer][Razmer], double Matrix1[Razmer][Razmer], double Matrix2[Razmer][Razmer])
{
	for (int i = 0; i < Razmer; i++)
	{
		for (int j = 0; j < Razmer; j++)
		{
			Matrix[i][j] = 0;
			for (int t = 0; t < Razmer; t++)
				Matrix[i][j] += Matrix1[i][t] * Matrix2[t][j];
		}
	}
	vivod(Matrix);
	
}

void summ(double Matrix[Razmer][Razmer], double Matrix1[Razmer][Razmer], double Matrix2[Razmer][Razmer])
{

		for (int i = 0; i < Razmer; i++)
			for (int j = 0; j < Razmer; j++)
			{
				Matrix[i][j] = Matrix1[i][j] + Matrix2[i][j];
			}
		vivod(Matrix);
	
}

void razn(double Matrix[Razmer][Razmer], double Matrix1[Razmer][Razmer], double Matrix2[Razmer][Razmer])
{
	for (int i = 0; i < Razmer; i++)
		for (int j = 0; j < Razmer; j++)
		{
			Matrix[i][j] = Matrix1[i][j] - Matrix2[i][j];
		}
	vivod(Matrix);
	
}


int main()

{
	char ch;
	do {
		double Matrix[Razmer][Razmer] = { 0 };
		double Matrix1[Razmer][Razmer] = { 0 };
		double Matrix2[Razmer][Razmer] = { 0 };
		int Razmer_Matrix1_M;
		int Razmer_Matrix1_N;
		int Razmer_Matrix2_M;
		int Razmer_Matrix2_N;
		int i = 0, j = 0;
		std::cout << "Write dimensions Matrix A(MxN)" << std::endl;
		std::cin >> Razmer_Matrix1_M >> Razmer_Matrix1_N;
		system("cls");
		std::cout << "Write dimensions Matrix B(MxN)" << std::endl;
		std::cin >> Razmer_Matrix2_M >> Razmer_Matrix2_N;
		system("cls");
		std::cout << "Write elements Matrix A(MxN)" << std::endl;
		for (int i = 0; i < Razmer_Matrix1_M; i++)
			for (int j = 0; j < Razmer_Matrix1_N; j++)
			{
				std::cin >> Matrix1[i][j];
				
			}
		system("cls");


		std::cout << "Write elements Matrix B(MxN)" << std::endl;
		for (int i = 0; i < Razmer_Matrix2_M; i++)
			for (int j = 0; j < Razmer_Matrix2_N; j++)
			{
				std::cin >> Matrix2[i][j];
			}
		system("cls");
		

		std::cout << "Write 1 if '*'" << std::endl;
		std::cout << "Write 2 if '+'" << std::endl;
		std::cout << "Write 3 if '-'" << std::endl;
	
		char Operazia;
		std::cin >> Operazia;
		system("cls");
		std::cout << "Matrix A:" << std::endl;
		for (int i = 0; i < Razmer_Matrix1_M; i++)
		{
			for (int j = 0; j < Razmer_Matrix1_N; j++)
			{
				std::cout << "A[" << i + 1 << "]" << "[" << j + 1 << "]=" << Matrix1[i][j] << " ";
			}
			std::cout << std::endl;
		}
		std::cout << "Matrix B:" << std::endl;
		for (int i = 0; i < Razmer_Matrix2_M; i++)
		{
			for (int j = 0; j < Razmer_Matrix2_N; j++)
			{
				std::cout << "A[" << i + 1 << "]" << "[" << j + 1 << "]=" << Matrix2[i][j] << " ";
			}
			std::cout << std::endl;
		}
		system("pause");
		switch (Operazia)
		{
		case '1':
			if (Razmer_Matrix1_N == Razmer_Matrix2_M) {
				proizvedenie(Matrix, Matrix1, Matrix2);
			}
			else
			{
				std::cout << "Input error";
				break;
			}
		case '2':
			if(Razmer_Matrix1_M== Razmer_Matrix2_M){
				summ(Matrix, Matrix1, Matrix2);
			}
			else
			{
				std::cout << "Input error";
				break;
			}
		case '3':
			if (Razmer_Matrix1_M == Razmer_Matrix2_M) {
				razn(Matrix, Matrix1, Matrix2);
			}
			else
			{
				std::cout << "Input error";
				break;
			}
		default:
			break;
		}

		
		
		std::cout << "esc to exit" << std::endl;
		std::cout << "Press any key to restart program" << std::endl;
		ch = _getch();

	} while (ch != 27);
	system("pause");
}
