// Lab_Work#2 by fussy.gk
// "Значение функции с шагом"
// Лабораторная работа по дисциплине "Программирование"
// Под руководством Чабанова В.В.
// Семененко Евгений Валерьевич
// ПИ.б.о.191(1)

#include <iostream>
#include <limits>
#include <cmath>

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	
	double xBegin;	// Начало промежутка
	double xEnd;	// Конец промежутка

	std::cout << "Введите промежуток функции: ";
	std::cin >> xBegin >> xEnd;

	double a;		// Параметры 
	double b;		// вычисления

	std::cout << "Введите параметры a, b: ";
	std::cin >> a >> b;

	double xStep;	// Шаг функции

	std::cout << "Введите шаг отображения функции: ";
	std::cin >> xStep;

	double xMin = std::numeric_limits<double>::max(); // Инициализация переменной максимально возможным значением типа
	double xMax = std::numeric_limits<double>::min(); // Инициализация переменной минимально возможным значением типа
	double functionValue;

	for (double i = xBegin; i <= xEnd; i += xStep)
	{
		if (i <= a + 0.00001) // Костыль, надо бы исправить 
		{
			functionValue = log(i);
		}
		else if (i > a && i < b)
		{
			functionValue = 1;
		}
		else if (i >= b)
		{
			functionValue = exp(i);
		}

		std::cout << "При x = " << i << ": " << functionValue << std::endl;

		// Обработка максимальных-минимальных значений
		if (functionValue < xMin)
		{
			xMin = functionValue;
		}
		else if (functionValue > xMax)
		{
			xMax = functionValue;
		}
	}
	
	std::cout << "Минимальное значение функции на промежутке от " << xBegin << " до " << xEnd << ": " << xMin << std::endl;
	std::cout << "Максимальное значение функции на промежутке от " << xBegin << " до " << xEnd << ": " << xMax << std::endl;

	std::cin.get();
	std::cin.get();
}