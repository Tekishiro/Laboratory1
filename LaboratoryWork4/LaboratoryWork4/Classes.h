#pragma once

#include "stdafx.h"
#include <iostream>
using namespace std;

//������ � �����, �������������, �������������, ��������, ������ ��� � �.�.

class Tarif //����� ����� ����������� �����
{
protected:
	int fee;
	Tarif *next;

public:
	Tarif() { cout << "����� ������!" << endl; }
	Tarif(int fee) { this->fee = fee; cout << "����� ������!" << endl; }
	virtual ~Tarif() { cout << "����� ������!" << endl; }

	virtual void SetFee(int);
	virtual void ShowFee();
	virtual void Show() = 0;


	friend class List;

};


class Corp : public Tarif //������������� ����� - ���������� ������ ��������
{
private:
	unsigned int associate;

public:
	Corp() { cout << "������������� ����� ������!" << endl; }
	Corp(int fee, int associate) : Tarif(fee) {
		this->associate = associate;
		cout << "������������� ����� ������!" << endl;
	}
	~Corp() { cout << "������������� ����� ������!" << endl; }

	void SetAssociate(int);
	void ShowAssociate();
	void Show();
};

class Individual : public Tarif //�������������� ����� - ���������� ������
{
private:
	unsigned int freemins;

public:
	Individual() { cout << "�������������� ����� ������!" << endl; }
	Individual(int fee, int freemins) : Tarif(fee) { this->freemins = freemins;
													 cout << "�������������� ����� ������!" << endl; }
	~Individual() { cout << "�������������� ����� ������!" << endl; }

	void SetFreeMins(int);
	void ShowFreeMins();
	void Show();
};

class Standart : public Tarif
{
private:
	unsigned int freesms;

public:
	Standart() { cout << "����������� ����� ������!" << endl; }
	Standart(int fee, int freesms) :Tarif(fee) { this->freesms = freesms; 
												 cout << "����������� ����� ������!" << endl; }
	~Standart() { cout << "����������� ����� ������!" << endl; }

	void SetFreeSms(int);
	void ShowFreeSms();
	void Show();
};

class BusinessPRO : public Tarif //���������� ��������� ���������
{
private:
	unsigned int megabytes;

public:
	BusinessPRO() { cout << "����� ��������� ������!" << endl; }
	BusinessPRO(int fee, int megabytes) :Tarif(fee) { this->megabytes = megabytes;
													  cout << "����� ��������� ������!" << endl; }
	~BusinessPRO() { cout << "����� ��������� ������!" << endl; }

	void SetMegabytes(int);
	void ShowMegabytes();
	void Show();
};