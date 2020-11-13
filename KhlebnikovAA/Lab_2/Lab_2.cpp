#include <iostream>
#include <ctime>
void my_sort(int* arr, int size ) {
    int i=0, j;
    do {
        j = 0;
        do {
            if (arr[j+1] < arr[j]) {
                arr[j + 1] = arr[j] + arr[j + 1];
                arr[j] = arr[j + 1] - arr[j];
                arr[j+1] = arr[j + 1] - arr[j];
            }
            j++;
        } while (j < size - 1);
        i++;
    } while (i < size);

}

int main()
{
    setlocale(0, "rus");
    srand(time(NULL));
    const int size = 7;
    int arr[size], min, max;
    float sr=0;
    min = std::numeric_limits<int>::max();
    max = std::numeric_limits<int>::min();
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 51-25;
    }
    my_sort(arr, size);
    std::cout << "Первый Массив: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    int neg_arr[size],j=0;
    for (int i = 0; i < size; i++) {
        if (arr[i]%2 != 0) {
            neg_arr[j] = arr[i];
            if (neg_arr[j] > max) {
                max = neg_arr[j];
            }
            if (neg_arr[j] < min) {
                min = neg_arr[j];
            }
            j++;
        }
    }
    std::cout << "Второй Массив: ";
    for (int i = 0; i<j; i++) {
        std::cout<< neg_arr[i] << " ";
        sr += neg_arr[i];
    }
    std::cout << std::endl;
    std::cout << "Минимальный элемент: " << max << "\nМаксимальный элемент : " << min << std::endl;
    std::cout << "Среднее значение: ~ " << sr / j<<std::endl;
    system("PAUSE");
}