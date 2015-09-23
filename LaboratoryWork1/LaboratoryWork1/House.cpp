#include "stdafx.h"
#include <iostream>
#include <string>
#include <math.h>
#include "House.h"
using namespace std;


//������� ����� House : id, ����� ��������, �������, ����,
//���������� ������, �����, ��� ������, ���� ������������.
//������� - ����� ��������� ������ � ���������� �����(�������� ������������),
//������� �������� �������(������������� � ���.�������).


void House::PrintInf()
{
	cout << "Id: " << id << endl;
	cout << "����� ��������: " << number << endl;
	cout << "�������: " << square << endl;
	cout << "����: " << roof << endl;
	cout << "���������� ������: " << room << endl;
	cout << "�����: " << Street << endl;
	cout << "��� ������: " << Type << endl;
	cout << "���� ������������: " << time << endl;
}

void House::SetId(int Id)
{
	if (Id < 0) id = abs(Id);
	else id = Id;
}

unsigned int House::GetId() const
{
	return id;
}


void House::SetNumber(int Number)
{
	if (Number < 0) number = abs(Number);
	else number = Number;
}

unsigned int House::GetNumber() const
{
	return number;
}


void House::SetSquare(int Square)
{
	if (Square < 0) square = abs(Square);
	else square = Square;
}

unsigned int House::GetSquare() const
{
	return square;
}


void House::SetRoof(int Roof)
{
	if (Roof < 0) roof = abs(Roof);
	else roof = Roof;
}

unsigned int House::GetRoof() const
{
	return roof;
}


void House::SetRoom(int Room)
{
	if (Room < 0) room = abs(Room);
	else room = Room;
}

unsigned int House::GetRoom() const
{
	return room;
}


void House::SetStreet(string StreetName)
{
	if (StreetName.length() > 5) Street = StreetName;
}

string House::GetStreet() const
{
	return Street;
}


void House::SetType(string HouseType)
{
	if (HouseType.length() > 5) Type = HouseType;
}

string House::GetType() const
{
	return Type;
}


void House::SetTime(int Time)
{
	if (Time < 0) time = abs(Time);
	else time = Time;
}

unsigned int House::GetTime() const
{
	return time;
}

void House::printRoom(int Room)
{
	if (room == Room) PrintInf();
}

void House::printRandR(int Room, int Roof1, int Roof2)
{
	if (room == Room && roof >= Roof1 && roof <= Roof2) PrintInf();
}

void House::printSquare(int Square)
{
	if (square >= Square) PrintInf();
}