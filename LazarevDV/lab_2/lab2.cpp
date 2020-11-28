#include <ctime>
#include <iostream>
#include <conio.h>


using namespace std;

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "Russian");
    const int length = 10;
    int arr[length], oddarr[length], firstIndex = 0, minIndex, nowIndex, j = 0; //под nowIndex подразумеваю текущий индекс, переменная j нужна как индекс второго массива
    float counter = 0;
    cout << "Добро пожаловать в сортировщик массивов Дениса Лазарева!\n"; 
    cout << "Первый массив: ";
    for (int i = 0; i < 10; i++) { //Заполнение массива рандомными числами
        arr[i] = rand() % 50 - 25;
        cout << arr[i] << " ";
    }
    cout << endl;


    while (firstIndex < length - 1) { //Сортировка массива
        minIndex = firstIndex;
        nowIndex = firstIndex + 1;
        while (nowIndex < length) {
            if (arr[nowIndex] < arr[minIndex]) {
                minIndex = nowIndex;
            }
            nowIndex++;
        }
        swap(arr[firstIndex], arr[minIndex]);
        firstIndex++;
    }


    cout << "Отсортированный массив: "; //Вывод отсортированного первого массива
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    cout << "Второй массив: ";
    for (int i = 0; i < 10; i++) { //Вывод второго массива состоящего из нечетных элементов первого
        if (arr[i] % 2 != 0) {
            oddarr[j] = arr[i];
            j++;
        }
    }
    for (int i = 0; i < j; i++) {
        cout << oddarr[i] << " ";
    }
    cout << endl;
    
    
    cout << "Среднее значение: ~ "; //Вывод отсортированного первого массива
    for (int i = 0; i < 10; i++) {
        counter += arr[i];
    }
    cout << counter / 10 << endl;

    cout << "Минимальное число: " << arr[0] << endl; //Вывод минимального числа массива(выводим первый элемент тк массив отсортирован)

    cout << "Максимальное число: " << arr[length - 1] << endl; //Вывод максимального числа массива(выводим последний элемент тк массив отсортирован)

    system("pause");
    return 0;
}
