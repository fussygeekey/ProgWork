// P_Work by fussy.gk
// Практическая работа по дисциплине "Программирование"
// Под руководством Чабанова В.В.
// Семененко Евгений Валерьевич
// ПИ.б.о.191(1)

#include <iostream>
#include <cmath>
#include <Windows.h>

#define Print(x) std::cout << x << std::endl
#define Enter(x) std::cin >> x

int main() {
	setlocale(LC_ALL, "RUSSIAN");

	// Task #9
	// "Угадай число"
	int r = rand() % 100;
	int num;
	int i = 1;

a:  Enter(num);

	if (num < r && i < 5) {
		Print("Ваше число меньше загаданного. Повторите ввод: ");
		i ++;
		goto a;

	} else if (num > r && i < 5) {
		Print("Ваше число больше загаданного. Повторите ввод: ");
		i++;
		goto a;

	} else if (num == r && i < 5) {
		Print("Победа! Ваше число равно загаданному. ");

	} else {
		Print("Попытки иссякли! ");

	}

	std::cin.get();
	std::cin.get();

}
