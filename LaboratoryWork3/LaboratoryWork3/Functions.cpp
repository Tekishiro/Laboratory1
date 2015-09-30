#include "stdafx.h"
#include <iostream>
#include <math.h>
#include "Classes.h"
using namespace std;

//Классы – Тариф, Корпоративный, Индивидульный, Стандарт, Бизнес Про и т.д.

void Tarif::SetFee(int fee)
{
	this->fee = abs(fee);
}

void Tarif::GetFee()
{
	cout << "Абонентская плата тарифа: " << this->fee << " рублей в месяц." << endl;
}

void Corp::SetAssociate(int associate)
{
	this->associate = abs(associate);
}

void Corp::GetAssociate()
{
	cout << "Количество коллег на тарифе: " << this->associate << endl;
}

void Individual::SetFreeMins(int freemins)
{
	this->freemins = abs(freemins);
}

void Individual::GetFreeMins()
{
	cout << "На этом тарифе доступно " << this->freemins << " бесплатных минут." << endl;
}

void Standart::SetFreeSms(int freesms)
{
	this->freesms = abs(freesms);
}

void Standart::GetFreeSms()
{
	cout << "На этом тарифе доступно " << this->freesms << " беплатных СМС." << endl;
}

void BusinessPRO::SetMegabytes(int megabytes)
{
	this->megabytes = abs(megabytes);
}

void BusinessPRO::GetMegabytes()
{
	cout << "На этом тарифе доступно " << this->megabytes << " бесплатных мегабайт интернета." << endl;
}