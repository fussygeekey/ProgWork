// P_Work by fussy.gk
// Практическая работа по дисциплине "Программирование"
// Под руководством Чабанова В.В.
// Семененко Евгений Валерьевич
// ПИ.б.о.191(1)

#include <iostream>
#include <vector>
#include <ctime>

enum order
{
	ASC,
	DESC

};

std::vector<int> BozoSort(std::vector<int>, order);
bool isSorted(std::vector<int>, order);
void PrintArray(std::vector<int>);

int main()
{
	// Task #28
	// BozoSort
	std::vector<int> numbers;
	int size, number; 

	std::cin >> size;

	for (int i = 0; i < size; i++)
	{
		std::cin >> number;
		numbers.push_back(number);

	}
	
	PrintArray(BozoSort(numbers, ASC));
	PrintArray(BozoSort(numbers, DESC));

	std::cin.get();
	std::cin.get();

}

std::vector<int> BozoSort(std::vector<int> numbers, order way)
{
	srand(time(NULL));

	while (!isSorted(numbers, way))
	{
		std::swap(numbers[rand() % numbers.size()], numbers[rand() % numbers.size()]);

	}

	return numbers;

}

bool isSorted(std::vector<int> numbers, order way)
{
	if (way == ASC)
	{
		for (int i = 0; i < numbers.size(); i++)
		{
			if (numbers[i] < numbers[i - 1])
			{
				return false;

			}

		}

		return true;

	}

	else if (way == DESC)
	{
		for (int i = 0; i < numbers.size(); i++)
		{
			if (numbers[i] > numbers[i - 1])
			{
				return false;

			}

		}

		return true;

	}

}

void PrintArray(std::vector<int> numbers)
{
	for (int i = 0; i < numbers.size(); i++)
	{
		std::cout << numbers[i] << " ";

	} std::cout << std::endl;

}