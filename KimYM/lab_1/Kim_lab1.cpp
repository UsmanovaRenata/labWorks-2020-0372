#include <iostream>
#include <conio.h>
int main()
{
    char ch, mathaction;
    double number1, number2;
    setlocale(0, "");
    do {
        std::cout << "Введите первое число\n";
        std::cin >> number1;
        std::cout << "Введите второе число\n";
        std::cin >> number2;
        std::cout << "Введите знак математического действия\n";
        std::cin >> mathaction;
            switch (mathaction) {
            case '+':
                std::cout << number1 << " + " << number2 << " = " << number1 + number2 << "\n" << "Нажмите Enter для продолжения или Escape для выхода из программы\n" << "\n";
                break;
            case '-':
                std::cout << number1 << " - " << number2 << " = " << number1 - number2 << "\n" << "Нажмите Enter для продолжения или Escape для выхода из программы\n" << "\n";
                break;
            case '*':
                std::cout << number1 << " * " << number2 << " = " << number1 * number2 << "\n" << "Нажмите Enter для продолжения или Escape для выхода из программы\n" << "\n";
                break;
            case '/':
                if (number2 == 0) {
                    std::cout << "Деление на ноль невозможно\n" << "Нажмите Enter для продолжения или Escape для выхода из программы\n" << "\n";
                    break;
                }
                else {
                    std::cout << number1 << " / " << number2 << " = " << number1 / number2 << "\n" << "Нажмите Enter для продолжения или Escape для выхода из программы\n" << "\n";
                }
                break;
            default:
                std::cout << "Введено неверное действие\n" << "Нажмите Enter для продолжения или Escape для выхода из программы\n";
            }
        ch = _getch();
    } while (ch != 27);
}
