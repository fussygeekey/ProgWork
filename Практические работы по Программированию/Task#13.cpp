// P_Work by fussy.gk
// Практическая работа по дисциплине "Программирование"
// Под руководством Чабанова В.В.
// Семененко Евгений Валерьевич
// ПИ.б.о.191(1)

#include <iostream>

int PowerOfTwo(int n);

int main() 
{
    // Task#13
    // "Степень двойки"
    int n;

    std::cin >> n;

    std::cout << PowerOfTwo(n);

    std::cin.get();
    std::cin.get();

}



int PowerOfTwo(int n) 
{
    if (n <= 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else 
    {
        int i = 2; // Счетчик степени
        int j = 1;

        do 
        {
            i *= 2;
            j++;
        } while (i <= n);

        return j;

    }

}
