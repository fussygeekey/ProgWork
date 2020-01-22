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

	// Task #8
	// Простейший калькулятор
	double  a;
	double  b;
	double  res;
	char    operation;

a:  Enter(a);
	Enter(operation);
	Enter(b);

	switch (operation) {
		case '+':
			res = a + b;
			break;

		case '-':
			res = a - b;
			break;

		case '*':
			res = a * b;
			break;

		case '/':
			res = a / b;
			break;

		default:
			Print("Error! Повторите ввод: ");
			goto a;

	};

	Print(res);

	std::cin.get();
	std::cin.get();

}
