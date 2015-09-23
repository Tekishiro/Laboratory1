// LaboratoryWork1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include "House.h"


//������� ����� House : id, ����� ��������, �������, ����,
//���������� ������, �����, ��� ������, ���� ������������.
//������� - ����� ��������� ������ � ���������� �����(�������� ������������),
//������� �������� �������(������������� � ���.�������).


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
	House house1(1,2,3,4,5, "�������", "�����������", 10);
	House house2;
	House *H = (House*)operator new(sizeof(House) * count);
		for (int i = 0; i < count; i++)
		{
			cout << "������� Id ����: " << endl;
			cin >> ID;
			cout << "������� ����� ��������: " << endl;
			cin >> NUMBER;
			cout << "������� ������� ��������: " << endl;
			cin >> SQUARE;
			cout << "������� ����: " << endl;
			cin >> ROOF;
			cout << "������� ���������� ������: " << endl;
			cin >> ROOM;
			cout << "������� �����: " << endl;
			cin >> STREET;
			cout << "������� ��� ��������: " << endl;
			cin >> TYPE;
			cout << "������� ����� ������������: " << endl;
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
		cout << "----------����:----------" << endl;
		cout << "1 - ������� ���� ������" << endl;
		cout << "2 - ������� �������� � �������� ������ ������" << endl;
		cout << "3 - ������� �������� � �������� ������ ������ � � ���������� ������" << endl;
		cout << "4 - ������� �������� � ��������, ������ ��������" << endl;
		cout << "0 - ����� �� ���������" << endl;
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
					cout << "������� ����� ������: " << endl;
					cin >> roomF;
					for (int i = 0; i < count; i++)
						H[i].printRoom(roomF); break;
				}
				case 3:
				{
					cout << "������� ����� ������: " << endl;
					cin >> roomF;
					cout << "������� ������ ���� ����������: " << endl;
					cin >> roofF1;
					cout << "������� ������� ���� ����������: " << endl;
					cin >> roofF2;
					for (int i = 0; i < count; i++)
						H[i].printRandR(roomF, roofF1, roofF2); break;
				}
				case 4:
				{
					cout << "������� �������: " << endl;
					cin >> squareF;
					for (int i = 0; i < count; i++)
						H[i].printSquare(squareF); break;
				}
			}

	}
	system("cls");
	cout << "��������� ���������:" << endl;
	cout << "�������� ������������ �����������:" << endl;
	house2 = house1;
	house2.PrintInf();
	cout << "��������:" << endl;
	house1.~House();
	house2.~House();
	for (int i = 0; i < count; i++)
	{
		H[i].~House();
		cout << "�������" << endl;
	}
	operator delete (H);
    return 0;
}

