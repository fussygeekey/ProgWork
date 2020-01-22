// P_Work by fussy.gk
// Практическая работа по дисциплине "Программирование"
// Под руководством Чабанова В.В.
// Семененко Евгений Валерьевич
// ПИ.б.о.191(1)

#include <iostream>

#define Print(x) std::cout << x << std::endl
#define Enter(x) std::cin >> x

bool Prime(unsigned int number);

int main() {
	setlocale(LC_ALL, "RUSSIAN");

	// Task #12
	// "Простое число"
	unsigned int number;

	Enter(number);

	if (Prime(number) == false) Print("-1 ");

	else Print("Число простое. ");

	std::cin.get();
	std::cin.get();

}

bool Prime(unsigned int number) { // Проверка на простоту
	if (number < 0) return false;

	if (number == 0 || number == 1)	return true;

	for (int i = 2; i < number; i++)
		if (number % i == 0) return false;


	return true;

}
