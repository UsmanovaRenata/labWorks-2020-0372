#include <iostream>
#include <time.h>
using namespace std;


void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int size)
{
    int i, j, min_idex;


    for (i = 0; i < size - 1; i++)
    {
        // Find the minimum element in unsorted array  
        min_idex = i;
        for (j = i + 1; j < size; j++)
            if (arr[j] < arr[min_idex])
                min_idex = j;

        // Swap the found minimum element with the first element  
        swap(&arr[min_idex], &arr[i]);
    }
}





int main() {
    const int size = 10;
    int Arr[size];
    int OddArr[size];
    int indx_odd = 0;
    float sum_odd = 0;



    std::cout << "Original array: ";
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        Arr[i] = rand() % 200 - 100;
        std::cout << Arr[i] << ' ';
    }

    selectionSort(Arr, size);
    std::cout << "\nAfter sorting: ";
    for (int i = 0; i < size; i++) {
        std::cout << Arr[i] << ' ';
    }

    std::cout << "\nThe second array (odd numbers) : ";
    for (int i = 0; i < size; i++) {
        if (Arr[i] % 2 != 0) {
            OddArr[indx_odd++] = Arr[i];
            cout << Arr[i] << ' ';
            sum_odd += Arr[i];
        }
    }


    std::cout << "\nAverage: ~ " << sum_odd / indx_odd;
    std::cout << "\nMinimum element: " << OddArr[0];
    std::cout << "\nMaximum element: " << OddArr[indx_odd - 1] << "\n";




    system("pause");
    return 0;

}