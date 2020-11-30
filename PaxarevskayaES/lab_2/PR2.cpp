#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    setlocale(0, "");
    
    // Создадим, заполним и выведем массив
    const int size = 10;
    int array_1[size]{};
    for (int i = 0; i < size; i++)
        array_1[i] = rand();
    std::cout << "Сгенерированный массив:" << std::endl;
    for (int i = 0; i < size; i++)
        std::cout << array_1[i] << " ";

    // Отсортируем массив
    int i = 0;
    while (i != size) {
        int j = 0;
        while (j < size) {
            if (array_1[i] < array_1[j])
            {
                std::swap(array_1[i], array_1[j]);
            }
            j++;
        }
        i++;
    }

    // Посчитаем кол-во нечетных чисел и их сумму (для среднего значения)
    int counter = 0, summa = 0;
    for (int i = 0; i < size; i++) 
    {
        if (array_1[i] % 2 != 0) {
            counter ++;
            summa += array_1[i];
        }
    }
    // Заполним второй массив
    int array_2[size]{};
    int j = 0;
    for (int i = 0; i < size; i++) {
        if (array_1[i] % 2 != 0) {
            array_2[j] = array_1[i];
            j++;
        }
    }
    // Выведем новый массив
    std::cout << "\nВторой массив:\n";
    for (int i = 0; i < size; i++) {
        while (array_2[i] != 0) {
            std::cout << array_2[i] << " ";
            break;
        }
    }

    // Выведем минимальный элемент, максимальный элемент и среднее значение
    std::cout << "\nМинимальный элемент: " << array_2[0] << std::endl;
    std::cout << "Максимальный элемент: " << array_2[counter-1] << std::endl;
    std::cout << "Среднее значение: " << float(summa / counter);

    return 0;
}