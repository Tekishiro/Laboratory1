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
	Tarif(int fee) { this->fee = fee; cout << "����� ������!" << endl; }
	~Tarif() { cout << "����� ������!" << endl; }

	void SetFee(int);
	void ShowFee();
};


class Corp : public Tarif //������������� ����� - ���������� ������ ��������
{
private:
	unsigned int associate;

public:
	Corp() { cout << "������������� ����� ������!" << endl; }
	Corp(int fee, int associate) : Tarif(fee) { this->associate = associate;
												cout << "������������� �����(2) ������!" << endl;}
	~Corp() { cout << "������������� ����� ������!" << endl; }

	void SetAssociate(int);
	void ShowAssociate();
};

class Individual : public Tarif //�������������� ����� - ���������� ������
{
private:
	unsigned int freemins;

public:
	Individual() { cout << "�������������� ����� ������!" << endl; }
	~Individual() { cout << "�������������� ����� ������!" << endl; }

	void SetFreeMins(int);
	void ShowFreeMins();
};

class Standart : public Tarif
{
private:
	unsigned int freesms;

public:
	Standart() { cout << "����������� ����� ������!" << endl; }
	~Standart() { cout << "����������� ����� ������!" << endl; }

	void SetFreeSms(int);
	void ShowFreeSms();
};

class BusinessPRO : public Tarif //���������� ��������� ���������
{
private:
	unsigned int megabytes;

public:
	BusinessPRO() { cout << "����� ��������� ������!" << endl; }
	~BusinessPRO() { cout << "����� ��������� ������!" << endl; }

	void SetMegabytes(int);
	void ShowMegabytes();
};