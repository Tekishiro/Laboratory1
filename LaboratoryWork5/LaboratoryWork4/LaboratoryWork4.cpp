// LaboratoryWork4.cpp: ���������� ����� ����� ��� ����������� ����������.
//

//������ � �����, �������������, �������������, ��������, ������ ��� � �.�.

#include "stdafx.h"
#include <iostream>
#include "Classes.h"
#include "List.h"

Tarif *List::head = NULL;

int main()
{
	setlocale(LC_ALL, "Rus");
	system("chcp 1251");

	int fee1, associate1, freemins1, freesms1, megabytes1;
	List list;

	Corp *p; Individual *i; Standart *s; BusinessPRO *b;


	cout << "������� ����������� ����� ������:" << endl;
	cin >> fee1;
	cout << "������� ���������� ������ ��� ������:" << endl;
	cin >> associate1;
	p = new Corp(fee1, associate1);
	list.Insert(p);

	cout << "������� ����������� ����� ������:" << endl;
	cin >> fee1;
	cout << "������� ���������� ���������� �����:" << endl;
	cin >> freemins1;
	i = new Individual(fee1, freemins1);
	list.Insert(i);

	cout << "������� ����������� ����� ������:" << endl;
	cin >> fee1;
	cout << "������� ����� ���������� ���:" << endl;
	cin >> freesms1;
	s = new Standart(fee1, freesms1);
	list.Insert(s);

	cout << "������� ����������� ����� ������:" << endl;
	cin >> fee1;
	cout << "������� ����� ���������� ��������:" << endl;
	cin >> megabytes1;
	b = new BusinessPRO(fee1, megabytes1);
	list.Insert(b);

	system("cls");


	cout << "����� ������� � ���������: " << list.ListCount() << endl;
	list.Sort();
	list.ShowAll();


	int min = 0, max = 0;
	cout << "������� ����������� � ������������ ����������� �����: " << endl;
	cin >> min >> max;
	cout << "���������� ������: " << endl;
	list.SearchTarif(min, max);


	return 0;
}