// LaboratoryWork3.cpp: определяет точку входа для консольного приложения.
//

//Классы – Тариф, Корпоративный, Индивидульный, Стандарт, Бизнес Про и т.д.

#include "stdafx.h"
#include <iostream>
#include "Classes.h"


int main()
{
	setlocale(LC_ALL, "Rus");
	system("chcp 1251");


	int fee1, associate1, freemins1, freesms1, megabytes1;

	cout << "Введите абонентскую плату тарифа:" << endl;
	cin >> fee1;
	Tarif a;
	a.SetFee(fee1);
	a.ShowFee();
	cout << "-----------------------------------" << endl;

	cout << "Введите абонентскую плату тарифа:" << endl;
	cin >> fee1;
	cout << "Введите количество коллег для тарифа:" << endl;
	cin >> associate1;
	Corp b;
	b.SetFee(fee1);
	b.SetAssociate(associate1);
	b.ShowFee();
	b.ShowAssociate();
	cout << "-----------------------------------" << endl;

	cout << "Введите абонентскую плату тарифа:" << endl;
	cin >> fee1;
	cout << "Введите количество бесплатных минут для тарифа:" << endl;
	cin >> freemins1;
	Individual c;
	c.SetFee(fee1);
	c.SetFreeMins(freemins1);
	c.ShowFee();
	c.ShowFreeMins();
	cout << "-----------------------------------" << endl;

	cout << "Введите абонентскую плату тарифа:" << endl;
	cin >> fee1;
	cout << "Введите количество бесплатных СМС для тарифа:" << endl;
	cin >> freesms1;
	Standart d;
	d.SetFee(fee1);
	d.SetFreeSms(freesms1);
	d.ShowFee();
	d.ShowFreeSms();
	cout << "-----------------------------------" << endl;

	cout << "Введите абонентскую плату тарифа:" << endl;
	cin >> fee1;
	cout << "Введите количество бесплатных мегабайт интернета для тарифа:" << endl;
	cin >> megabytes1;
	BusinessPRO e;
	e.SetFee(fee1);
	e.SetMegabytes(megabytes1);
	e.ShowFee();
	e.ShowMegabytes();
	cout << "-----------------------------------" << endl;

	cout << "Введите абонентскую плату тарифа:" << endl;
	cin >> fee1;
	cout << "Введите количество коллег для тарифа:" << endl;
	cin >> associate1;
	Corp f = Corp(fee1, associate1);
	f.ShowFee();
	f.ShowAssociate();
	cout << "-----------------------------------" << endl;

    return 0;
}