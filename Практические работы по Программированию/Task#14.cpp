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

	// Task #14
	// "Фиксированная сумма"

	// Задано целое число S и два диапозона целых чисел: S1 = [L1 ... R1], S2 = [L2 ... R2].
	// Необходимо найти два числа X1 и X2, чтобы выполнялись условия:
	// X1 + X2 = S, X1 принадлежит S1, X2 принадлежит S2.
	// В случае появления альтернативных вариантов, вывести числа с наименьшим X1.
	// Если таких нет вовсе, вывести "-1".

	int s;
	int l_one;
	int r_one;
	int l_two;
	int r_two;

	Enter(s);
	Enter(l_one);
	Enter(r_one);
	Enter(l_two);
	Enter(r_two);

	for (; l_one <= r_one; l_one ++) {
		for (; l_two <= r_two; l_two ++) {
			if (l_one + l_two == s) {
				Print(l_one);
				Print(l_two);

				goto a;

			}

		}

	}

	Print("-1 ");

a:	std::cin.get();
	std::cin.get();

}
