#pragma once

#include "stdafx.h"
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

//Создать класс House : id, Номер квартиры, Площадь, Этаж,
//Количество комнат, Улица, Тип здания, Срок эксплуатации.
//Функции - члены реализуют запись и считывание полей(проверка корректности),
//расчета возраста задания(необходимость в кап.ремонте).

class House
{
private:	unsigned int id;
			unsigned int number;
			unsigned int square;
			unsigned int roof;
			unsigned int room;
			string Street;
			string Type;
			unsigned int time;

public:		
			House () { cout << "Created!" << endl; }

			House(unsigned int Id, unsigned int Number, unsigned int Square,
				  unsigned int Roof, unsigned int Room, string StreetName, string HouseType,
				  unsigned int Time)
			{
				id = Id;
				number = Number;
				square = Square;
				roof = Roof;
				room = Room;
				Street = StreetName;
				Type = HouseType;
				time = Time;

				cout << "Created!" << endl;
			}


			House(const House& h)
			{
				id = h.GetId();
				number = h.GetNumber();
				square = h.GetSquare();
				roof = h.GetRoof();
				room = h.GetRoom();
				Street = h.GetStreet();
				Type = h.GetType();
				time = h.GetTime();
				cout << "Copied!" << endl;
			}


			void PrintInf();

			void SetId(int);
			unsigned int GetId() const;

			void SetNumber(int);
			unsigned int GetNumber() const;

			void SetSquare(int);
			unsigned int GetSquare() const;

			void SetRoof(int);
			unsigned int GetRoof() const;

			void SetRoom(int);
			unsigned int GetRoom() const;

			void SetStreet(string);
			string GetStreet() const;

			void SetType(string);
			string GetType() const;

			void SetTime(int);
			unsigned int GetTime() const;



			void printRoom(int);
			void printRandR(int, int, int);
			void printSquare(int);
};