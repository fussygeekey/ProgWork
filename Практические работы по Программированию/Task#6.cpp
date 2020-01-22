// P_Work by fussy.gk
// Практическая работа по дисциплине "Программирование"
// Под руководством Чабанова В.В.
// Семененко Евгений Валерьевич
// ПИ.б.о.191(1)

#include <iostream>
#include <Windows.h>
#include <cmath>

#define Print(x) std::cout << x << std::endl
#define Enter(x) std::cin >> x

void Quadratic(double a, double b, double c);

int main() {
	setlocale(LC_ALL, "RUSSIAN");

	// Task #6
	// Поиск корней квадратного уравнения
	double a;
	double b;
	double c;

	std::cout << "Введите параметры А, В, С: " << std::endl;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;

	Quadratic(a, b, c);

	std::cin.get();
	std::cin.get();

}

void Quadratic(double a, double b, double c) { // Поиск корней квадратного уравнения
	double D = b * b - 4 * a * c, x1, x2;

	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				std::cout << "Неизвестные принимают любое значение. " << std::endl;

				return;

			} else {
				std::cout << "Неизвестных не существует. " << std::endl;

				return;
			
			}

		}

		x1 = -c / b;
		std::cout << x1 << std::endl;

		return;

	}

	if (D > 0) {
		x1 = (-b - sqrt(D)) / (a * 2);
		x2 = (-b + sqrt(D)) / (a * 2);

		std::cout << x1 << x2 << std::endl;

	} else if (D == 0) {
		x1 = -b / (a * 2);

		std::cout << x1 << std::endl;

	} else std::cout << "Неизвестные не входят в множество вещественных чисел. " << std::endl;

}