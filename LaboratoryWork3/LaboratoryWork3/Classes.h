#pragma once

#include "stdafx.h"
#include <iostream>
using namespace std;

//������ � �����, �������������, �������������, ��������, ������ ��� � �.�.

class Tarif //����� ����� ����������� �����
{
private:
	int fee;

public:
	Tarif() { cout << "����� ������!" << endl; }
	~Tarif() { cout << "����� ������!" << endl; }

	void SetFee(int);
	void GetFee();
};


class Corp : public Tarif //������������� ����� - ���������� ������ ��������
{
private:
	unsigned int associate;

public:
	Corp() { cout << "������������� ����� ������!" << endl; }
	~Corp() { cout << "������������� ����� ������!" << endl; }

	void SetAssociate(int);
	void GetAssociate();
};

class Individual : public Tarif //�������������� ����� - ���������� ������
{
private:
	unsigned int freemins;

public:
	Individual() { cout << "�������������� ����� ������!" << endl; }
	~Individual() { cout << "�������������� ����� ������!" << endl; }

	void SetFreeMins(int);
	void GetFreeMins();
};

class Standart : public Tarif
{
private:
	unsigned int freesms;

public:
	Standart() { cout << "����������� ����� ������!" << endl; }
	~Standart() { cout << "����������� ����� ������!" << endl; }

	void SetFreeSms(int);
	void GetFreeSms();
};

class BusinessPRO : public Tarif //���������� ��������� ���������
{
private:
	unsigned int megabytes;

public:
	BusinessPRO() { cout << "����� ��������� ������!" << endl; }
	~BusinessPRO() { cout << "����� ��������� ������!" << endl; }

	void SetMegabytes(int);
	void GetMegabytes();
};