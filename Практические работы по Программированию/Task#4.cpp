// P_Work by fussy.gk
// Практическая работа по дисциплине "Программирование"
// Под руководством Чабанова В.В.
// Семененко Евгений Валерьевич
// ПИ.б.о.191(1)

#include <iostream>

#define Print(x) std::cout << x << std::endl
#define Enter(x) std::cin >> x

int main() {
	setlocale(LC_ALL, "RUSSIAN");

	// Task #4
	// Обмен значениями без использования 3-ей переменной
	double a;
	double b;

	Print("Введите два числа, которые требуется поменять местами: ");
	Enter(a);
	Enter(b);

	a = a + b;
	b = a - b;
	a -= b;

	Print(a);
	Print(b);

	std::cin.get();
	std::cin.get();
	
}
