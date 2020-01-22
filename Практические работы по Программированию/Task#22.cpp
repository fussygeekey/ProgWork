// Lab_Work by fussy.gk
// Практическая работа по дисциплине "Программирование"
// Под руководством Чабанова В.В.
// Семененко Евгений Валерьевич
// ПИ.б.о.191(1)

#include <iostream>

void	Swap(int*, int*);			// Обмен значениями
int 	MSort(int*, int*, int*);	// Вывод максимума
void 	Info(const int*);			// Вывод информации о переменной
int*	Add(int*, const int*);		// Вывод суммы

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	// Task#22
	// Работа с указателями
	int numberOne = 1;
	int numberTwo = 2;
	int numberThree = 3;

	Info(&numberOne);
	Info(&numberTwo);
	Info(&numberThree);

	std::cout << "Максимум: " << MSort(&numberOne, &numberTwo, &numberThree) << std::endl;

	std::cout << "Сумма: " << *Add(Add(&numberOne, &numberTwo), &numberThree);

	std::cin.get();

}

void Swap(int* a, int* b)
{
	*a += *b;
	*b = *a - *b;
	*a -= *b;

}

int MSort(int* a, int* b, int* c)
{
	if (*a > * b)
	{
		if (*a > * c)
		{
			return *a;

		}

		else
		{
			return *c;

		}

	}

	else
	{
		if (*b > * c)
		{
			return *b;

		}

		else
		{
			return *c;

		}

	}

}

void Info(const int* a)
{
	std::cout << "Адрес перменной: " << &a << "; Значение перменной: " << *a << std::endl;

}

int* Add(int* a, const int* b)
{
	*a += *b;
	return a;

}