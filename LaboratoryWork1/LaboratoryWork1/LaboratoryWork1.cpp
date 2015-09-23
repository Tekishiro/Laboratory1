// LaboratoryWork1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include "House.h"


//Создать класс House : id, Номер квартиры, Площадь, Этаж,
//Количество комнат, Улица, Тип здания, Срок эксплуатации.
//Функции - члены реализуют запись и считывание полей(проверка корректности),
//расчета возраста задания(необходимость в кап.ремонте).


int main()
{
	setlocale(LC_ALL, "Rus");

	int count = 2;
	unsigned int ID;
	unsigned int NUMBER;
	unsigned int SQUARE;
	unsigned int ROOF;
	unsigned int ROOM;
	string STREET;
	string TYPE;
	unsigned int TIME;
	House house1(1,2,3,4,5, "Казинца", "Стандартная", 10);
	House house2;
	House *H = (House*)operator new(sizeof(House) * count);
		for (int i = 0; i < count; i++)
		{
			cout << "Введите Id дома: " << endl;
			cin >> ID;
			cout << "Введите номер квартиры: " << endl;
			cin >> NUMBER;
			cout << "Введите площадь квартиры: " << endl;
			cin >> SQUARE;
			cout << "Введите этаж: " << endl;
			cin >> ROOF;
			cout << "Введите количество комнат: " << endl;
			cin >> ROOM;
			cout << "Введите улицу: " << endl;
			cin >> STREET;
			cout << "Введите тип квартиры: " << endl;
			cin >> TYPE;
			cout << "Введите время эксплуатации: " << endl;
			cin >> TIME;
			new (&H[i]) House(ID, NUMBER, SQUARE, ROOF,
							  ROOM, STREET, TYPE, TIME);
		}
	int c = 1;
	int roomF;
	int roofF1;
	int roofF2;
	int squareF;
	while (c)
	{
		cout << "----------МЕНЮ:----------" << endl;
		cout << "1 - Вывести весь список" << endl;
		cout << "2 - Вывести квартиры с заданным числом комнат" << endl;
		cout << "3 - Вывести квартиры с заданным числом комнат и в промежутке этажей" << endl;
		cout << "4 - Вывести квартиры с площадью, больше заданной" << endl;
		cout << "0 - Выход из программы" << endl;
		cin >> c;
		system("cls");

			switch (c)
			{
				case 1:
				{
					for (int i = 0; i < count; i++)
						H[i].PrintInf(); break;
				}
				case 2:
				{
					cout << "Введите число комнат: " << endl;
					cin >> roomF;
					for (int i = 0; i < count; i++)
						H[i].printRoom(roomF); break;
				}
				case 3:
				{
					cout << "Введите число комнат: " << endl;
					cin >> roomF;
					cout << "Введите нижний этаж промежутка: " << endl;
					cin >> roofF1;
					cout << "Введите верхний этаж промежутка: " << endl;
					cin >> roofF2;
					for (int i = 0; i < count; i++)
						H[i].printRandR(roomF, roofF1, roofF2); break;
				}
				case 4:
				{
					cout << "Введите площадь: " << endl;
					cin >> squareF;
					for (int i = 0; i < count; i++)
						H[i].printSquare(squareF); break;
				}
			}

	}
	system("cls");
	cout << "Финальные процедуры:" << endl;
	cout << "Проверка конструктора копирования:" << endl;
	house2 = house1;
	house2.PrintInf();
	cout << "Удаление:" << endl;
	house1.~House();
	house2.~House();
	for (int i = 0; i < count; i++)
	{
		H[i].~House();
		cout << "Удалено" << endl;
	}
	operator delete (H);
    return 0;
}

