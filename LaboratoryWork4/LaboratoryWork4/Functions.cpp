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

void Tarif::ShowFee()
{
	cout << "Абонентская плата тарифа: " << this->fee << " рублей в месяц." << endl;
}

void Corp::SetAssociate(int associate)
{
	this->associate = abs(associate);
}

void Corp::ShowAssociate()
{
	cout << "Количество коллег на тарифе: " << this->associate << endl;
}

void Corp::Show()
{
	cout << "Абонентская плата тарифа: " << this->fee << " рублей в месяц." << endl;
	cout << "Количество коллег на тарифе: " << this->associate << endl;
}

void Individual::SetFreeMins(int freemins)
{
	this->freemins = abs(freemins);
}

void Individual::ShowFreeMins()
{
	cout << "На этом тарифе доступно " << this->freemins << " бесплатных минут." << endl;
}

void Individual::Show()
{
	cout << "Абонентская плата тарифа: " << this->fee << " рублей в месяц." << endl;
	cout << "На этом тарифе доступно " << this->freemins << " бесплатных минут." << endl;
}

void Standart::SetFreeSms(int freesms)
{
	this->freesms = abs(freesms);
}

void Standart::ShowFreeSms()
{
	cout << "На этом тарифе доступно " << this->freesms << " беплатных СМС." << endl;
}

void Standart::Show()
{
	cout << "Абонентская плата тарифа: " << this->fee << " рублей в месяц." << endl;
	cout << "На этом тарифе доступно " << this->freesms << " беплатных СМС." << endl;
}

void BusinessPRO::SetMegabytes(int megabytes)
{
	this->megabytes = abs(megabytes);
}

void BusinessPRO::ShowMegabytes()
{
	cout << "На этом тарифе доступно " << this->megabytes << " бесплатных мегабайт интернета." << endl;
}

void BusinessPRO::Show()
{
	cout << "Абонентская плата тарифа: " << this->fee << " рублей в месяц." << endl;
	cout << "На этом тарифе доступно " << this->megabytes << " бесплатных мегабайт интернета." << endl;
}