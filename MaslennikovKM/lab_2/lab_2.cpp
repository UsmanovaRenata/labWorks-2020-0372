#include <iostream>
#include <ctime>

int main() {
    const int size = 10;
    int arr[size];
    srand(time(NULL));
    std::cout << "The generated array: " << std::endl;
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 1000 - 400;
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    int i = 0;
    // insert sort
    while (i < size - 1) {
        int k = i;
        int j = i + 1;
        while (j > 0) {
            if (arr[j] > arr[k]) {
                break;
            }
            if (arr[k] > arr[j]) {
                int swap = arr[k];
                arr[k] = arr[j];
                arr[j] = swap;
            }
            j--;
            k--;
        }
        i++;
    }
    std::cout << "Sorted array: " << std::endl;
    int arr_nech[size] = {}; int koli4_nech = 0;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
        if (arr[i] % 2 != 0) {
            arr_nech[koli4_nech] = arr[i];
            ++koli4_nech;
        }
    }
    std::cout << std::endl;
    std::cout << "New array: " << std::endl;
    float sum_nech = 0; 
    int Max_nech = arr_nech[koli4_nech - 1]; int Min_nech = arr_nech[0]; //  Min and Max elements in the array are the first and last after sorting, respectively 
    for (int i = 0; i < koli4_nech; ++i) {
        std::cout << arr_nech[i] << " ";
        sum_nech = sum_nech + arr_nech[i];
    }
    std::cout << std::endl;
    std::cout << "Middle: " << sum_nech / koli4_nech << std::endl;
    std::cout << "Max: " << Max_nech << std::endl;
    std::cout << "Min: " << Min_nech << std::endl;
    return 0;
}
