#include <iostream>
#include <cmath>
int main() {
    setlocale(LC_ALL, "Russian");
    double x;
    std::cout << "������� ����� ������� �������� ��������: ";
    std::cin >> x;
    while (true) {
        std::cout << "������� �������� x: ";
        if (std::cin >> x) {
            break;
        }
        else {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "������ �����. ����������, ������� �������� ��������." << std::endl;
        }
    }
    double ploshad_bol = x * x;
    double storon_mensh = x / sqrt(2);
    double ploshad_mensh = storon_mensh * storon_mensh;

    double result = ploshad_bol - ploshad_mensh;

    std::cout << "������� �� ������� ���������� ��������: " << result << std::endl;
    return 0;
}