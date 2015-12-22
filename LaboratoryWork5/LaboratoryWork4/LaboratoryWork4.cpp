// LaboratoryWork4.cpp: определяет точку входа для консольного приложения.
//

//Классы – Тариф, Корпоративный, Индивидульный, Стандарт, Бизнес Про и т.д.

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


	cout << "Введите абонентскую плату тарифа:" << endl;
	cin >> fee1;
	cout << "Введите количество коллег для тарифа:" << endl;
	cin >> associate1;
	p = new Corp(fee1, associate1);
	list.Insert(p);

	cout << "Введите абонентскую плату тарифа:" << endl;
	cin >> fee1;
	cout << "Введите количество бесплатных минут:" << endl;
	cin >> freemins1;
	i = new Individual(fee1, freemins1);
	list.Insert(i);

	cout << "Введите абонентскую плату тарифа:" << endl;
	cin >> fee1;
	cout << "Введите число бесплатных СМС:" << endl;
	cin >> freesms1;
	s = new Standart(fee1, freesms1);
	list.Insert(s);

	cout << "Введите абонентскую плату тарифа:" << endl;
	cin >> fee1;
	cout << "Введите число бесплатных мегабайт:" << endl;
	cin >> megabytes1;
	b = new BusinessPRO(fee1, megabytes1);
	list.Insert(b);

	system("cls");


	cout << "Число тарифов у оператора: " << list.ListCount() << endl;
	list.Sort();
	list.ShowAll();


	int min = 0, max = 0;
	cout << "Введите минимальную и максимальную абонентскую плату: " << endl;
	cin >> min >> max;
	cout << "Подходящие тарифы: " << endl;
	list.SearchTarif(min, max);


	return 0;
}