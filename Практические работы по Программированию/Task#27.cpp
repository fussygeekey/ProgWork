// P_Work by fussy.gk
// Практическая работа по дисциплине "Программирование"
// Под руководством Чабанова В.В.
// Семененко Евгений Валерьевич
// ПИ.б.о.191(1)

#include <iostream>
#include <ctime>

enum Element
{
	Fire,
	Air,
	Earth,
	Water

};

struct Sword
{
	int damage;

};

struct Bow
{
	int damage,
		chargeTime,
		distance;

};

struct Spell
{
	int damage,
		distance;
	Element power;

};

enum ItemType
{
	SWORD,
	BOW,
	SPELL

};

union StructTypes
{
	Sword swordThing;
	Bow	  bowThing;
	Spell spellThing;

};

struct Item
{
	ItemType	weapon;
	StructTypes type;

};

Item GetRandomItem();
void PrintItem(Item);

int main()
{
	// Task#27
	// "Лут-Бокс"
	srand(time(NULL));

	const unsigned int N = 5;
	Item loot[N];

	for (int i = 0; i < N; i++)
	{
		loot[i] = GetRandomItem();

	}

	for (int i = 0; i < N; i++)
	{
		PrintItem(loot[i]);

	}

	std::cin.get();

}

Item GetRandomItem()
{
	Item item;
	item.weapon = ItemType(rand() % 3);

	switch (item.weapon)
	{
		case SWORD:
		{
			item.type.swordThing.damage = rand() % 1001;
			
			return item;

		} break;

		case BOW:
		{
			item.type.bowThing.damage = rand() % 1001;
			item.type.bowThing.chargeTime = rand() % 301;
			item.type.bowThing.distance = rand() % 101;

			return item;

		} break;

		case SPELL:
		{
			item.type.spellThing.damage = rand() % 1001;
			item.type.spellThing.power = Element(rand() % 4);
			item.type.spellThing.distance = rand() % 101;

			return item;

		} break;

	}

	return item;

}

void PrintItem(Item loot)
{
	switch (loot.weapon)
	{
		case SWORD:
		{
			std::cout << "---SWORD---" << std::endl;
			std::cout << "Damage: " << loot.type.swordThing.damage << std::endl;

		} break;

		case BOW:
		{
			std::cout << "---BOW---" << std::endl;
			std::cout << "Damage: " << loot.type.bowThing.damage << std::endl;
			std::cout << "Charge time: " << loot.type.bowThing.chargeTime << std::endl;
			std::cout << "Distance: " << loot.type.bowThing.distance << std::endl;

		} break;

		case SPELL:
		{
			std::cout << "---SPELL---" << std::endl;
			std::cout << "Damage: " << loot.type.spellThing.damage << std::endl;
			std::cout << "Distance: " << loot.type.spellThing.distance << std::endl;
			std::cout << "Element: ";

			switch (loot.type.spellThing.power)
			{
				case Fire:
					std::cout << "fire. " << std::endl;
					break;

				case Air:
					std::cout << "air. " << std::endl;
					break;

				case Earth:
					std::cout << "earth. " << std::endl;
					break;

				case Water:
					std::cout << "water. " << std::endl;
					break;

			}

		} break;

	}

}