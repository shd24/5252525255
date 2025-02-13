#include <iostream>
#include <cmath>
int main313() {
	setlocale(LC_ALL, "Russian");
	double a = 2.8;
	double b = -0.3;
	double c = 4;
	double x, y;
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
	if (x < 1.2) {
		y = a * x * x + b * x + c;

	}
	else if (x == 1.2) {
		y = a / (x + sqrt(x * x + 1));
	}
	else {
		y = (a + b * x) / sqrt(x * x + 1);
	}
	std::cout << "Результат y:" << y << std::endl;

	return 0;
}


