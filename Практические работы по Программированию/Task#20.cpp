// P_Work by fussy.gk
// Практическая работа по дисциплине "Программирование"
// Под руководством Чабанова В.В.
// Семененко Евгений Валерьевич
// ПИ.б.о.191(1)

#include <iostream>
#include <vector>

std::vector<double> BubbleSort(std::vector<double>);

int main()
{
	// Task#20
	// Сортировка "пузырьковым" методом
	std::vector<double> numbers;
	double number;
	int n;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> number;
		numbers.push_back(number);

	}

	for (int i = 0; i < n; i++)
	{
		std::cout << BubbleSort(numbers)[i];

	}

	std::cin.get();
	std::cin.get();

}

std::vector<double> BubbleSort(std::vector<double> numbers)
{
	for (int i = 0; i < numbers.size() - 1; i++)
	{
		for (int j = 0; j < numbers.size() - i - 1; j++)
		{
			if (numbers[j] > numbers[j + 1])
			{
				std::swap(numbers[j], numbers[j + 1]);

			}

		}

	}

	return numbers;

}