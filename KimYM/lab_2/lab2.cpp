#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <ctime>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float summa = 0;
	int numbern = 0;
	const int arr_size = 9;
	int arr[arr_size];
	const int arr_size_vrem = 3;
	int brr[arr_size_vrem];
	srand(time(0));
	for (int i = 0; i < arr_size; i++) {
		arr[i] = rand() % 10;
	}
	std::cout << "Сгенерированный массив: ";
	for (int i = 0; i < arr_size; i++) {
		std::cout << arr[i] << " ";
		if (arr[i] % 2 != 0) {
			brr[numbern] = arr[i];
			numbern++;
		}
	}
	std::cout << std::endl;
	int i = 0;
	while (i != arr_size) {
		int k = 0;
		while (k < arr_size) {
			if (arr[i] < arr[k])
			{
				std::swap(arr[i], arr[k]);
			}
			k++;
		}
		i++;
	}
	std::cout << "Отсортированный массив: ";
	for (int i = 0; i < arr_size; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	int max = -1;
	int min = 10;
	std::cout << "Массив, состоящий из нечетный элементов: ";
	for (int i = 0; i < numbern; i++) {
		std::cout << brr[i] << " ";
		summa = summa + brr[i];
		if (brr[i] >= max) {
			max = brr[i];
		}
		if (brr[i] <= min) {
			min = brr[i];
		}
	}
	std::cout << std::endl;
	std::cout << "Среднее значение всех элементов массива нечетных элементов: ";
	std::_Ptr_cout->precision(2);
	std::cout << (summa / numbern) << std::endl;
	std::cout << "Минимальное значение массива нечетных элементов: " << min << std::endl;
	std::cout << "Максимальное значение массива нечетных элементов: " << max << std::endl;
}
