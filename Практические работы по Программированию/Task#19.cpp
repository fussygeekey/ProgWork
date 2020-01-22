// P_Work by fussy.gk
// Практическая работа по дисциплине "Программирование"
// Под руководством Чабанова В.В.
// Семененко Евгений Валерьевич
// ПИ.б.о.191(1)

#include <iostream>
#include <map>

int main()
{
	// Task#19
	// "Количество цифр"
	short n;
	std::map <short, short> numbers =
	{
		{1, 0},
		{2, 0},
		{3, 0},
		{4, 0},
		{5, 0},
		{6, 0},
		{7, 0},
		{8, 0},
		{9, 0},
		{0, 0}

	};

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		int a;
		std::cin >> a;
		numbers[a]++;

	}

	std::map <short, short>::iterator i = numbers.begin();

	for (; i != numbers.end(); i++)
	{
		if (i->second == 0)
		{
			continue;

		}

		std::cout << i->first << " : " << i->second << std::endl;

	}

	std::cin.get();
	std::cin.get();

}