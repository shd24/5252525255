#include <iostream>
#include <limits> 
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    const int size = 10;
    int A[size];
    int* ptr = A;
    cout << "������� 10 �����: ";
    for (int i = 0; i < size; ++i) {
        while (!(cin >> *(ptr + i))) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "������ �����. ����������, ������� �������� ��������: ";
        }
    }

    int product = 1;
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (*(ptr + i) > 0 && *(ptr + i) % 3 == 0) {
            product *= *(ptr + i);
            ++count;
        }
    }

    if (count > 0) {
        cout << "������������ ������������� ���������, ������� 3: " << product << endl;
        cout << "���������� ����� ���������: " << count << endl;
    }
    else {
        cout << "��� ������������� ���������, ������� 3." << endl;
    }

    return 0;
}