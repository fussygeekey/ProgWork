// P_Work by fussy.gk
// Практическая работа по дисциплине "Программирование"
// Под руководством Чабанова В.В.
// Семененко Евгений Валерьевич
// ПИ.б.о.191(1)

#include <iostream>
#include <Windows.h>

#define Print(x) std::cout << x << std::endl
#define Enter(x) std::cin >> x

int main() {
	setlocale(LC_ALL, "RUSSIAN");

	// Task #11
	// Поиск факториала
	int number;
	int res = 1;

	Enter(number);

	for (int i = 1; i <= number; i ++) {
		res *= i;

	}

	Print(res);

	std::cin.get();
	std::cin.get();

}
