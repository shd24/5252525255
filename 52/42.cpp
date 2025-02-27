#include <iostream>
#include <cmath> 
using namespace std;

int main4253() {
    setlocale(LC_ALL, "Russian");
    const int size = 10; 
    int A[size]; 
    int* ptr = A; 
    cout << "������� 10 ����� �����: ";
    for (int i = 0; i < size; ++i) {
        while (!(cin >> *(ptr + i))) { 
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "������ �����. ����������, ������� ����� �����: ";
        }
    }
    int* minPtr = ptr; 
    for (int i = 1; i < size; ++i) {
        if (abs(*(ptr + i)) < abs(*minPtr)) { 
            minPtr = ptr + i; 
        }
    }

    cout << "����������� �� ������ �������: " << *minPtr << endl;

    return 0;
}