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

	// Task #10
	// Возведение в степень
	int number;
	int exponent;

	Enter(number);
	int q_number = number;

	Enter(exponent);

	for (; exponent > 1; exponent --) {
		q_number *= number;

	}

	Print(q_number);

	std::cin.get();
	std::cin.get();

}
