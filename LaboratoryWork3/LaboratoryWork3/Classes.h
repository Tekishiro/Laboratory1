#pragma once

#include "stdafx.h"
#include <iostream>
using namespace std;

//Классы – Тариф, Корпоративный, Индивидульный, Стандарт, Бизнес Про и т.д.

class Tarif //тариф имеет абонентскую плату
{
private:
	int fee;

public:
	Tarif() { cout << "Тариф создан!" << endl; }
	~Tarif() { cout << "Тариф удален!" << endl; }

	void SetFee(int);
	void GetFee();
};


class Corp : public Tarif //корпоративный тариф - бесплатные звонки коллегам
{
private:
	unsigned int associate;

public:
	Corp() { cout << "Корпоративный тариф создан!" << endl; }
	~Corp() { cout << "Корпоративный тариф удален!" << endl; }

	void SetAssociate(int);
	void GetAssociate();
};

class Individual : public Tarif //индивидуальный тариф - бесплатные минуты
{
private:
	unsigned int freemins;

public:
	Individual() { cout << "Индивидуальный тариф создан!" << endl; }
	~Individual() { cout << "Индивидуальный тариф удален!" << endl; }

	void SetFreeMins(int);
	void GetFreeMins();
};

class Standart : public Tarif
{
private:
	unsigned int freesms;

public:
	Standart() { cout << "Стандартный тариф создан!" << endl; }
	~Standart() { cout << "Стандартный тариф удален!" << endl; }

	void SetFreeSms(int);
	void GetFreeSms();
};

class BusinessPRO : public Tarif //бесплатные мегабайты интернета
{
private:
	unsigned int megabytes;

public:
	BusinessPRO() { cout << "Тариф БизнесПРО создан!" << endl; }
	~BusinessPRO() { cout << "Тариф БизнесПРО удален!" << endl; }

	void SetMegabytes(int);
	void GetMegabytes();
};