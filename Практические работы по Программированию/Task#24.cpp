// P_Work by fussy.gk
// Практическая работа по дисциплине "Программирование"
// Под руководством Чабанова В.В.
// Семененко Евгений Валерьевич
// ПИ.б.о.191(1)

#include <iostream>

size_t	StrLen(const char*);
int		StrCmp(const char* string1, const char* string2);
char*	StrStr(char* string1, const char* string2);
char*	StrCat(char* destptr, const char* srcptr);

int main() {
	setlocale(LC_ALL, "RUSSIAN");
	// Task #24
	// Функции работы со строками
	char firstString[50];
	char secondString[50];
	int i = 0;

	std::cin.getline(firstString, 50);
	std::cin.getline(secondString, 50);

	std::cout << StrLen(firstString) << " " << StrLen(secondString) << std::endl;

	if (StrCmp(firstString, secondString) == 1)
	{
		std::cout << "Первая строка больше второй. " << std::endl;

	}

	else if (StrCmp(firstString, secondString) == 0)
	{
		std::cout << "Строки равны. " << std::endl;

	}

	else if (StrCmp(firstString, secondString) == -1)
	{
		std::cout << "Вторая строка больше первой. " << std::endl;

	}

	char* charPosition = StrStr(firstString, secondString);

	if (charPosition == NULL)
	{
		std::cout << -1 << std::endl;
	
	}
	
	else 
	{
		std::cout << static_cast<int>(charPosition - &firstString[0]) << std::endl;
	
	}


	while (StrCat(firstString, secondString)[i] != '\0')
	{
		std::cout << StrCat(firstString, secondString)[i];
		i++;

	}

	std::cin.get();
	std::cin.get();

}

size_t StrLen(const char* string)
{
	std::size_t i = 0;

	while (string[i] != '\0')
	{
		i++;

	}

	return i;

}

int StrCmp(const char* firstString, const char* secondString)
{
	for (int i = 0; i < StrLen(firstString); i++)
	{
		if (tolower(firstString[i]) > tolower(secondString[i]))
		{
			return 1;

		}

		else if (tolower(firstString[i]) == tolower(secondString[i]))
		{
			return 0;

		}

		else if (tolower(firstString[i]) < tolower(secondString[i]))
		{
			return -1;

		}

	}

}

char* StrStr(char* firstString, const char* secondString)
{
	int sizeOfSecondString = StrLen(secondString);

	for (int i = 0, j = 0; firstString[i] != '\0'; i++)
	{
		if (firstString[i] == secondString[j])
		{
			for (int k = i, l = j; k < sizeOfSecondString + i; k++, l++)
			{
				if (firstString[k] != secondString[l])
				{
					return NULL;

				}

			}

			return firstString + i;

		}

	}

	return NULL;

}

char* StrCat(char* firstString, const char* secondString)
{
	char newString[100];
	int i = 0; // Индекс массива при формировании

	for (; i < StrLen(firstString); i++)
	{
		newString[i] = firstString[i];

	}

	for (int j = 0; i < StrLen(firstString) + StrLen(secondString); i++, j++)
	{
		newString[i] = secondString[j];

	}

	newString[i] = '\0';

	return newString;

}