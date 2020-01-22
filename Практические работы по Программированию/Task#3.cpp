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

	// Task #3
	// Арифметика для разных типов
	int    a;
	int    b;
	double c;
	double d;

	Enter(a);
	c = a;
	Enter(b);
	d = b

	Print("INT + INT: ");
	Print(a + b);

	Print("INT - INT: ");
	Print(a - b);

	Print("INT * INT: ");
	Print(a * b);

	Print("INT / INT: ");
	Print(a / b);


	Print("DOUBLE + DOUBLE: ");
	Print(c + d);

	Print("DOUBLE - DOUBLE: ");
	Print(c - d);

	Print("DOUBLE * DOUBLE: ");
	Print(c * d);

	Print("DOUBLE + DOUBLE: ");
	Print(c / d);


	Print("INT + DOUBLE: ");
	Print(a + d);

	Print("INT - DOUBLE: ");
	Print(a - d);

	Print("INT * DOUBLE: ");
	Print(a * d);

	Print("INT + DOUBLE: ");
	Print(a / d);


	Print("DOUBLE + INT: ");
	Print(c + b);

	Print("DOUBLE - INT: ");
	Print(c - b);

	Print("DOUBLE * INT: ");
	Print(c * b);

	Print("DOUBLE + INT: ");
	Print(c / b);

	std::cin.get();
	std::cin.get();

}
