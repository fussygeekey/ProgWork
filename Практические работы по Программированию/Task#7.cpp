// P_Work by fussy.gk
// Практическая работа по дисциплине "Программирование"
// Под руководством Чабанова В.В.
// Семененко Евгений Валерьевич
// ПИ.б.о.191(1)

#include <iostream>
#include <cmath>

#define Print(x) std::cout << x << std::endl
#define Enter(x) std::cin >> x

double Square(double a, double b, double c);									 // Перегрузка
double Square(double a1, double a2, double b1, double b2, double c1, double c2); // функций

int main() {
	setlocale(LC_ALL, "RUSSIAN");

	// Task #7
	// Поиск площади треугольника
	enum choice {1, 2};

	Print("Как Вы собираетесь находить площадь треугольника: \n
	1) Имея три известные стороны, \n
	2) Имея координаты вершин?");

a:	Enter(choice);

	switch (choice) {
		case 1:
			double* a = new double;
			double* b = new double;
			double* c = new double;

			Enter(*a);
			Enter(*b);
			Enter(*c);

			Print(Square(*a, *b, *c));

			delete a;
			delete b;
			delete c;

		case 2:
			double* a1 = new double;
			double* a2 = new double;
			double* b1 = new double;
			double* b2 = new double;
			double* c1 = new double;
			double* c2 = new double;

			Enter(*a1);
			Enter(*a2);
			Enter(*b1);
			Enter(*b2);
			Enter(*c1);
			Enter(*c2);

			Print(Square(*a1, *a2, *b1, *b2, *c1, *c2));

			delete a1;
			delete a2;
			delete b1;
			delete b2;
			delete c1;
			delete c2;

		default:
			Print("Error! Повторите ввод. ");
			goto a;

	}

	std::cin.get();
	std::cin.get();

}

double Square(double a, double b, double c) {
	double p = (a + b + c) / 2; // Полупериметр

	if (a + b < c || b + c < a || c + a < b) Print("Error! "); // Проверка на реализацию

	else return sqrt(p * (p - a) * (p - b) * (p - c)); // Формула Герона

}

double Square(double a1, double a2, double b1, double b2, double c1, double c2) {
	double a, b, c;

	a = sqrt((a1 - b1) * (a1 - b1) + (a2 - b2) * (a2 - b2)); // Поиск
	b = sqrt((b1 - c1) * (b1 - c1) + (b2 - c2) * (b2 - c2)); // сторон
	c = sqrt((c1 - a1) * (c1 - a1) + (c2 - a2) * (c2 - a2)); // треугольника

	return Square(a, b, c);

}
