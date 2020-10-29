#include <iostream>
#include <ctime>

//Length of the array
const int SIZE = 10;

//Quicksort algorithm
void quickSort(int* arr, int low, int high) {
	if (low < high) {
		int pivot = arr[high],
			i = low - 1,
			j = low;

		while (j < high) {
			if (arr[j] <= pivot) {
				i++;
				std::swap(arr[i], arr[j]);
			}

			j++;
		}

		std::swap(arr[i + 1], arr[high]);

		int pivotId = i + 1;

		quickSort(arr, low, pivotId - 1);
		quickSort(arr, pivotId + 1, high);
	}
}


int main() {
	int index = 0, //For the second array to it fill and print out
		sum = 0;
	int firstArray[SIZE],
		secondArray[SIZE];

	srand(time(NULL));

	std::cout << "Initial Array: ";
	for (int i = 0; i < SIZE; i++) {
		firstArray[i] = rand() % 100 - 50;	//From -50 to 49
		std::cout << firstArray[i] << " ";
	}

	quickSort(firstArray, 0, SIZE - 1);

	//Fill the second array with odd numbers
	for (int i = 0; i < SIZE; i++) {
		if (firstArray[i] % 2 != 0) {
			secondArray[index++] = firstArray[i];
		}
	}

	//Print out the arrays
	std::cout << "\nSorted array: ";
	for (int i = 0; i < SIZE; i++) {
		std::cout << firstArray[i] << " ";
	}

	std::cout << "\n\nOdd numbers: ";
	for (int i = 0; i < index; i++) {
		std::cout << secondArray[i] << " ";
		sum += secondArray[i];
	}

	//Print out maximum, minimum and average values of the secondArray
	std::cout << 
		"\nMinimum odd number: " << secondArray[0] << "\n" << 
		"Maximum odd number: " << secondArray[index - 1] << "\n" << 
		"Average odd number: " << round((float)sum / index * 100) / 100 << std::endl; //Round the number to two decimal places

	system("pause");
	return 0;
}