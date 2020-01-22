// P_Work by fussy.gk
// Практическая работа по дисциплине "Программирование"
// Под руководством Чабанова В.В.
// Семененко Евгений Валерьевич
// ПИ.б.о.191(1)

#include <iostream>
#include <string>

int main() {
	setlocale(LC_ALL, "RUSSIAN");
	// Task #25
	// Структуры студента
	struct Student
	{
		std::string name;
		unsigned int groupNumber;
		unsigned int progress;

	};

	Student information[10];

	information[0] = {"Балабанов Н.П.", 192, 5};
	information[1] = {"Дягтерев А.Р.", 	122, 4};
	information[2] = {"Ещенко М.А.", 	112, 5};
	information[3] = {"Завьялов И.В.", 	906, 3};
	information[4] = {"Корзин В.А.", 	404, 2};
	information[5] = {"Мирончук А.А.", 	42,  2};
	information[6] = {"пихтиенко Д.В.", 124, 5};
	information[7] = {"Семененко Е.В.", 122, 5};
	information[8] = {"Федоров А.А.", 	192, 2};
	information[9] = {"Чех А.С.", 		404, 3};

	for (int i = 0; i < 10; i++)
	{
		if (information[i].progress < 3)
		{
			std::cout << information[i].name << "	" << information[i].groupNumber << "	" << information[i].progress << std::endl;

		}

	}

	std::cin.get();
	std::cin.get();

}