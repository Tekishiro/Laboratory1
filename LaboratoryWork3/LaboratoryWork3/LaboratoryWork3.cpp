// LaboratoryWork3.cpp: ���������� ����� ����� ��� ����������� ����������.
//

//������ � �����, �������������, �������������, ��������, ������ ��� � �.�.

#include "stdafx.h"
#include <iostream>
#include "Classes.h"


int main()
{
	setlocale(LC_ALL, "Rus");
	system("chcp 1251");


	int fee1, associate1, freemins1, freesms1, megabytes1;

	cout << "������� ����������� ����� ������:" << endl;
	cin >> fee1;
	Tarif a;
	a.SetFee(fee1);
	a.GetFee();
	cout << "-----------------------------------" << endl;

	cout << "������� ����������� ����� ������:" << endl;
	cin >> fee1;
	cout << "������� ���������� ������ ��� ������:" << endl;
	cin >> associate1;
	Corp b;
	b.SetFee(fee1);
	b.SetAssociate(associate1);
	b.GetFee();
	b.GetAssociate();
	cout << "-----------------------------------" << endl;

	cout << "������� ����������� ����� ������:" << endl;
	cin >> fee1;
	cout << "������� ���������� ���������� ����� ��� ������:" << endl;
	cin >> freemins1;
	Individual c;
	c.SetFee(fee1);
	c.SetFreeMins(freemins1);
	c.GetFee();
	c.GetFreeMins();
	cout << "-----------------------------------" << endl;

	cout << "������� ����������� ����� ������:" << endl;
	cin >> fee1;
	cout << "������� ���������� ���������� ��� ��� ������:" << endl;
	cin >> freesms1;
	Standart d;
	d.SetFee(fee1);
	d.SetFreeSms(freesms1);
	d.GetFee();
	d.GetFreeSms();
	cout << "-----------------------------------" << endl;

	cout << "������� ����������� ����� ������:" << endl;
	cin >> fee1;
	cout << "������� ���������� ���������� �������� ��������� ��� ������:" << endl;
	cin >> megabytes1;
	BusinessPRO e;
	e.SetFee(fee1);
	e.SetMegabytes(megabytes1);
	e.GetFee();
	e.GetMegabytes();
	cout << "-----------------------------------" << endl;

    return 0;
}