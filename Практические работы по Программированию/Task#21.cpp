// P_Work by fussy.gk
// Практическая работа по дисциплине "Программирование"
// Под руководством Чабанова В.В.
// Семененко Евгений Валерьевич
// ПИ.б.о.191(1)

#include <iostream>
#include <ctime>

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	// Task#21
	// "Найди ячейку в двумерном массиве"
	bool arr[8][10];
	int i, j;
	srand(time(NULL));

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			arr[i][j] = false;

		}

	}

	int randOne = rand() % 8, randTwo = rand() % 10;
	
	arr[randOne][randTwo] = true;

	for (int counter = 0; counter < 5; counter++)
	{
		std::cin >> i >> j;

		if (i < 0 || i > 8 || j < 0 || j > 10)
		{
			std::cout << "Выход за границу массива. " << std::endl;
			counter++;
			continue;

		}

		if (arr[i][j] == true)
		{
			std::cout << "Вы угадали! " << std::endl;

		}

		else
		{
			std::cout << "Нет. " << std::endl;

		}

	} std::cout << "Загаданные значения: " << randOne << " и " << randTwo;

	std::cin.get();
	std::cin.get();

}