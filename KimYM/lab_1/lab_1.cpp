#include <iostream>
#include <conio.h>
int main()
{
    int number_1, number_2;
    char action;
    char esc_action;
    std::cout << "Please enter the first number\n";
    std::cin >> number_1;
    std::cout << "Please enter the second number\n";
    std::cin >> number_2;
    std::cout << "Please enter action that you need\n";
    std::cin >> action;
    do {
        while (!std::cin >> number_1) {
            std::cout << "Wrong type" << "\n";
            std::cin.ignore();
            std::cin.clear();
        }
        while (!std::cin >> number_2) {
            std::cout << "Wrong type" << "\n";
            std::cin.ignore();
            std::cin.clear();
        }
        if (action != '+' || action != '-' || action != '*' || action != '/') {
            std::cout << "Unknown action";
        }
        else {

        
        if (action == '+') {
            std::cout << number_1 + number_2;
        }
        if (action == '-') {
            std::cout << number_1 - number_2;
        }
        if (action == '*') {
            std::cout << number_1 * number_2;
        }
        if (action == '/') {
            if (number_2 == 0) {
                std::cout << "You can't divide by null";
            }
            else {
                std::cout << number_1 / number_2;
            }
        }
    }
        esc_action = _getch();
    } while (esc_action != 27);
}
