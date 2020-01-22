// P_Work by fussy.gk
// Практическая работа по дисциплине "Программирование"
// Под руководством Чабанова В.В.
// Семененко Евгений Валерьевич
// ПИ.б.о.191(1)

#include <iostream>

struct IntArray
{
	int* data;
	int	 size;

};

void	CreateArray(IntArray*, int);		// Создает массив
int		GetElement(IntArray*, int);			// Получает элемент массива
void	SetNewValue(IntArray*, int, int);	// Устанавливает новое значение элемента массива
void	PrintArray(IntArray*);				// Выводит массив
void	ResizeArray(IntArray*, int);		// Меняет размер массива
void	FreeMemory(IntArray*);				// Освобождает память, занятую массивом

int main()
{
	// Task #26
	// Структура целочисленного массива
	IntArray numbers;

	CreateArray(&numbers, 30);

	for (int i = 0; i < numbers.size; i++)
	{
		SetNewValue(&numbers, i, i + 1);

	}

	PrintArray(&numbers);
	ResizeArray(&numbers, 50);
	PrintArray(&numbers);
	ResizeArray(&numbers, 10);
	PrintArray(&numbers);
	FreeMemory(&numbers);

	std::cin.get();

}

void CreateArray(IntArray* numbers, int size)
{
	numbers->data = new int[size];
	numbers->size = size;

}

int GetElement(IntArray* numbers, int index)
{
	if (index >= numbers->size)
	{
		std::cerr << "Error! "; // Небуферизированный вывод сообщения об ошибке
		exit(EXIT_FAILURE);

	}

	return numbers->data[index];

}

void SetNewValue(IntArray* numbers, int index, int newValue)
{
	if (index < numbers->size && index >= 0)
	{
		numbers->data[index] = newValue;

	}

}

void PrintArray(IntArray* numbers)
{
	std::cout << "[";

	for (int i = 0; i < numbers->size; i++)
	{
		std::cout << GetElement(numbers, i) << " ";

	}

	std::cout << "]" << std::endl;

}

void ResizeArray(IntArray* numbers, int newSize)
{
	int* newArray = new int[newSize];

	if (newSize < numbers->size)
	{
		for (int i = 0; i < newSize; i++)
		{
			newArray[i] = numbers->data[i];

		}

	}

	else if (newSize > numbers->size)
	{
		for (int i = 0; i < newSize; i++)
		{
			if (i < numbers->size)
			{
				newArray[i] = numbers->data[i];

			}

			else if (i >= numbers->size)
			{
				newArray[i] = 0;

			}

		}

	}

	delete[] numbers->data;

	numbers->data = newArray;
	numbers->size = newSize;

}

void FreeMemory(IntArray* numbers)
{
	delete[] numbers->data;

	numbers->data = NULL;
	numbers->size = 0;

}