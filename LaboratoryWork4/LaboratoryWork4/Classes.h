#pragma once

#include "stdafx.h"
#include <iostream>
using namespace std;

//Классы – Тариф, Корпоративный, Индивидульный, Стандарт, Бизнес Про и т.д.

class Tarif //тариф имеет абонентскую плату
{
protected:
	int fee;
	Tarif *next;

public:
	Tarif() { cout << "Тариф создан!" << endl; }
	Tarif(int fee) { this->fee = fee; cout << "Тариф создан!" << endl; }
	virtual ~Tarif() { cout << "Тариф удален!" << endl; }

	virtual void SetFee(int);
	virtual void ShowFee();
	virtual void Show() = 0;


	friend class List;

};


class Corp : public Tarif //корпоративный тариф - бесплатные звонки коллегам
{
private:
	unsigned int associate;

public:
	Corp() { cout << "Корпоративный тариф создан!" << endl; }
	Corp(int fee, int associate) : Tarif(fee) {
		this->associate = associate;
		cout << "Корпоративный тариф создан!" << endl;
	}
	~Corp() { cout << "Корпоративный тариф удален!" << endl; }

	void SetAssociate(int);
	void ShowAssociate();
	void Show();
};

class Individual : public Tarif //индивидуальный тариф - бесплатные минуты
{
private:
	unsigned int freemins;

public:
	Individual() { cout << "Индивидуальный тариф создан!" << endl; }
	Individual(int fee, int freemins) : Tarif(fee) { this->freemins = freemins;
													 cout << "Индивидуальный тариф создан!" << endl; }
	~Individual() { cout << "Индивидуальный тариф удален!" << endl; }

	void SetFreeMins(int);
	void ShowFreeMins();
	void Show();
};

class Standart : public Tarif
{
private:
	unsigned int freesms;

public:
	Standart() { cout << "Стандартный тариф создан!" << endl; }
	Standart(int fee, int freesms) :Tarif(fee) { this->freesms = freesms; 
												 cout << "Стандартный тариф создан!" << endl; }
	~Standart() { cout << "Стандартный тариф удален!" << endl; }

	void SetFreeSms(int);
	void ShowFreeSms();
	void Show();
};

class BusinessPRO : public Tarif //бесплатные мегабайты интернета
{
private:
	unsigned int megabytes;

public:
	BusinessPRO() { cout << "Тариф БизнесПРО создан!" << endl; }
	BusinessPRO(int fee, int megabytes) :Tarif(fee) { this->megabytes = megabytes;
													  cout << "Тариф БизнесПРО создан!" << endl; }
	~BusinessPRO() { cout << "Тариф БизнесПРО удален!" << endl; }

	void SetMegabytes(int);
	void ShowMegabytes();
	void Show();
};