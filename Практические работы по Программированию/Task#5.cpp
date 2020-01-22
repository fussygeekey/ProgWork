// P_Work by fussy.gk
// Практическая работа по дисциплине "Программирование"
// Под руководством Чабанова В.В.
// Семененко Евгений Валерьевич
// ПИ.б.о.191(1)

#include <iostream>

#define Print(x) std::cout << x << std::endl
#define Enter(x) std::cin >> x

double Function_X(double x_0, double v_0, double t);

int main() {
	setlocale(LC_ALL, "RUSSIAN");

	// Task #5
	// Падение объекта по функции
	double x_0;
	double v_0;
	double t;

	Print("Введите параметры X_0, V_0, T: ");
	Enter(x_0);
	Enter(v_0);
	Enter(t);

	Print(Function_X(x_0, v_0, t));

	std::cin.get();
	std::cin.get();

}

double Function_X(double x_0, double v_0, double t) { // Уравнение падения
	return x_0 + v_0 * t - 4.5 * t * t;

}
