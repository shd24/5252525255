#include <iostream>
#include <cmath>
int main() {
    setlocale(LC_ALL, "Russian");
    double x;
    std::cout << "Введите длину стороны большего квадрата: ";
    std::cin >> x;
    while (true) {
        std::cout << "Введите значение x: ";
        if (std::cin >> x) {
            break;
        }
        else {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода. Пожалуйста, введите числовое значение." << std::endl;
        }
    }
    double ploshad_bol = x * x;
    double storon_mensh = x / sqrt(2);
    double ploshad_mensh = storon_mensh * storon_mensh;

    double result = ploshad_bol - ploshad_mensh;

    std::cout << "Площадь за вычетом вписанного квадрата: " << result << std::endl;
    return 0;
}