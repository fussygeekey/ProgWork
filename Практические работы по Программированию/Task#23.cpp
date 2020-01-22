// P_Work by fussy.gk
// Практическая работа по дисциплине "Программирование"
// Под руководством Чабанова В.В.
// Семененко Евгений Валерьевич
// ПИ.б.о.191(1)

#include <iostream>
#include <string>
#include <algorithm>

int main() {
	// Task #23
	// "Палиндром"
	std::string word;
	bool isPalindrom = true;

	std::cin >> word;

	std::transform(word.begin(), word.end(), word.begin(), tolower); // <algorithm>

	for (int i = 0; i < word.size() - 1; i++)
	{
		// Удаление символов, не являющихся буквами латинского алфовита и кириллицы или цифрами
		if (word[i] < 48 || word[i] > 57 && word[i] < 65 || word[i] > 90 && word[i] < 97 || word[i] > 122 && word[i] < 192)
		{
			word.erase(i, 1);

		}

	}

	for (int i = 0; i < (word.size() - 1) / 2; i++)
	{
		if (word[i] != word[word.size() - i - 1])
		{
			isPalindrom = false;
			break;

		}

	}

	isPalindrom ? std::cout << "Number is a palindrom. " : std::cout << "Number is not a palindrom. ";

	std::cin.get();
	std::cin.get();

}