// P_Work by fussy.gk
// Практическая работа по дисциплине "Программирование"
// Под руководством Чабанова В.В.
// Семененко Евгений Валерьевич
// ПИ.б.о.191(1)

#include <iostream>
#include <map>

std::map<int, int> Factorization(int);
void PrintResult(std::map<int, int>);

int main()
{
	// Task#16
	// Факторизация числа
	int number;

	for (;;)
	{
		std::cin >> number;

		if (number <= 1)
		{
			std::cout << "Uncorrect value. Try again: ";
			continue;
		} 
		
		break;
	}

	PrintResult(Factorization(number));

	std::cin.get();
	std::cin.get();
}

std::map<int, int> Factorization(int number)
{
	std::map<int, int> factors;

	for (int i = 2; i <= sqrt(number); i++)
	{
		while (number % i == 0)
		{
			factors[i]++;
			number /= i;
		}
	}

	if (number != 1)
	{
		factors[number]++;
	}

	return factors;
}

void PrintResult(std::map<int, int> factors)
{
	std::map<int, int>::iterator it = factors.begin();

	if (it->second > 1)
	{
		std::cout << it->first << "^" << it->second;
		it++;
	}
	else
	{
		std::cout << it->first;
		it++;
	}

	for (; it != factors.end(); it++)
	{
		std::cout << " * ";

		if (it->second > 1)
		{
			std::cout << it->first << "^" << it->second;
		}
		else if (it->second == 1)
		{
			std::cout << it->first;
		}
	}
}