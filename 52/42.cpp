#include <iostream>
#include <cmath> 

int main() {
    setlocale(LC_ALL, "Russian");
    const int size = 10;
    int arr[size];
    std::cout << "Введите 10 целых чисел: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
    int minAbs = abs(arr[0]);
    int minIndex = 0;

    for (int i = 1; i < size; ++i) {
        int currentAbs = abs(arr[i]);
        if (currentAbs < minAbs) {
            minAbs = currentAbs;
            minIndex = i;
        }
    }
    std::cout << "Минимальный по модулю элемент: " << arr[minIndex] << std::endl;
    std::cout << "Его индекс: " << minIndex << std::endl;

    return 0;
}