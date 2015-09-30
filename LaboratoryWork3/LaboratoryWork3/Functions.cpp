#include "stdafx.h"
#include <iostream>
//#include <string>
//#include <string.h>
#include "Classes.h"
using namespace std;

//Классы – Тариф, Корпоративный, Индивидульный, Стандарт, Бизнес Про и т.д.

void Tarif::SetFee(int fee)
{
	this->fee = fee;
}

void Tarif::GetFee()
{
	cout << "Абонентская плата тарифа: " << this->fee << " рублей в месяц." << endl;
}

void Corp::SetAssociate(int associate)
{
	this->associate = associate;
}

void Corp::GetAssociate()
{
	cout << "Количество коллег на тарифе: " << this->associate << endl;
}

void Individual::SetFreeMins(int freemins)
{
	this->freemins = freemins;
}

void Individual::GetFreeMins()
{
	cout << "На этом тарифе доступно " << this->freemins << " бесплатных минут." << endl;
}

void Standart::SetFreeSms(int freesms)
{
	this->freesms = freesms;
}

void Standart::GetFreeSms()
{
	cout << "На этом тарифе доступно " << this->freesms << " беплатных СМС." << endl;
}

void BusinessPRO::SetMegabytes(int megabytes)
{
	this->megabytes = megabytes;
}

void BusinessPRO::GetMegabytes()
{
	cout << "На этом тарифе доступно " << this->megabytes << " бесплатных мегабайт интернета." << endl;
}