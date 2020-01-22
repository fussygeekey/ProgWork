// P_Work by fussy.gk
// Практическая работа по дисциплине "Программирование"
// Под руководством Чабанова В.В.
// Семененко Евгений Валерьевич
// ПИ.б.о.191(1)

#include <iostream>

double Body_Mass_Index(double, double);
void Print_BMI(double);

int main() 
{
	// Task#17
	// Индекс массы тела
	double weight;
	double height;
	
	std::cin >> weight;
	std::cin >> height;

	Print_BMI(Body_Mass_Index(weight, height / 100));

	std::cin.get();
	std::cin.get();

}



double Body_Mass_Index(double weight, double height) 
{
	if (weight <= 0 || height <= 0) 
	{
		return 0; // Проверка ошибки ввода
	}

	return weight / (height * height);

}



void Print_BMI(double BMI) 
{
	if (BMI == 0) 
	{
		std::cout << "Input error! " << std::endl;
	} 
	else if (BMI <= 18.5) 
	{
		std::cout << "Underweight. " << std::endl;
	} 
	else if (BMI <= 25.0) 
	{
		std::cout << "Normal weight. " << std::endl;
	} 
	else if (BMI <= 30.0) 
	{
		std::cout << "Overweight. " << std::endl;
	} 
	else 
	{
		std::cout << "Obesity. " << std::endl;
	}

}