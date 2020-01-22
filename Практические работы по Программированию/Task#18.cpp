//// P_Work by fussy.gk
// Практическая работа по дисциплине "Программирование"
// Под руководством Чабанова В.В.
// Семененко Евгений Валерьевич
// ПИ.б.о.191(1)

#include <iostream>
#include <cmath>
#include <ctime>

void SearchValues(int[]);

int main()
{
	// Task#18
	// Поиск минимума и максимума одномерного массива
	int numbers[20], min, max;
	srand(time(NULL));

	for (int i = 0; i < 20; i++)
	{
		numbers[i] = rand() % 100 - rand() % 100;
		std::cout << numbers[i] << " ";

	} std::cout << std::endl;

	SearchValues(numbers);

	std::cin.get();
	std::cin.get();

}

void SearchValues(int numbers[])
{
	int max = numbers[0], 
		min = numbers[0];

	for (int i = 1; i < 20; i++)
	{
		if (numbers[i] > max)
		{
			max = numbers[i];

		}
		else if (numbers[i] < min)
		{
			min = numbers[i];

		}

	}

	std::cout << "Minimum value: " << min << std::endl;
	std::cout << "Maximum value: " << max;

}