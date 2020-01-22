// P_Work by fussy.gk
// Практическая работа по дисциплине "Программирование"
// Под руководством Чабанова В.В.
// Семененко Евгений Валерьевич
// ПИ.б.о.191(1)

#include <iostream>
#include <vector>

void PrettySort(std::vector<double>);

int main()
{
	// Task#15
	// "TOP-5 Минимальных"
	std::vector<double> numbers;

	double number;
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> number;
		numbers.push_back(number);

	} std::cout << std::endl;

	PrettySort(numbers);

	std::cin.get();
	std::cin.get();

}

void PrettySort(std::vector<double> numbers)
{
	numbers.push_back(INT_MAX);

	for (int i = 0; i < numbers.size() - 1; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			for (int k = 0; k <= i - j; k++)
			{
				if (numbers[k] > numbers[k + 1])
				{
					std::swap(numbers[k], numbers[k + 1]);
				}

			}

		}

		for (int j = 0; j <= i && j < 5; j++)
		{
			std::cout << numbers[j] << " ";
		}

		std::cout << std::endl;

	}

}