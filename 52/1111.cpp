#include <iostream>
#include <cstdlib>  
#include <ctime>   

int main42() {
    setlocale(LC_ALL, "Russian");
    const int size = 10;
    int A[size];
    int product = 1;
    int count = 0;
    std::srand(std::time(0));

    for (int i = 0; i < size; ++i) {
        A[i] = std::rand() % 101 - 50;
    }
    std::cout << "������ A:";
    for (int i = 0; i < size; ++i) {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < size; ++i) {
        if (A[i] > 0 && A[i] % 3 == 0) {
            product *= A[i];
            count++;
        }
    }
    if (count > 0) {
        std::cout << "������������ ������������� ���������, ������� 3: " << product << std::endl;
        std::cout << "���������� ����� ���������: " << count << std::endl;
    }
    else {
        std::cout << "� ������� ��� ������������� ���������, ������� 3." << std::endl;
    }
    return 0;
}