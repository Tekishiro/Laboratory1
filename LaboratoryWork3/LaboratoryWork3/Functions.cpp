#include "stdafx.h"
#include <iostream>
#include <math.h>
#include "Classes.h"
using namespace std;

//������ � �����, �������������, �������������, ��������, ������ ��� � �.�.

void Tarif::SetFee(int fee)
{
	this->fee = abs(fee);
}

void Tarif::GetFee()
{
	cout << "����������� ����� ������: " << this->fee << " ������ � �����." << endl;
}

void Corp::SetAssociate(int associate)
{
	this->associate = abs(associate);
}

void Corp::GetAssociate()
{
	cout << "���������� ������ �� ������: " << this->associate << endl;
}

void Individual::SetFreeMins(int freemins)
{
	this->freemins = abs(freemins);
}

void Individual::GetFreeMins()
{
	cout << "�� ���� ������ �������� " << this->freemins << " ���������� �����." << endl;
}

void Standart::SetFreeSms(int freesms)
{
	this->freesms = abs(freesms);
}

void Standart::GetFreeSms()
{
	cout << "�� ���� ������ �������� " << this->freesms << " ��������� ���." << endl;
}

void BusinessPRO::SetMegabytes(int megabytes)
{
	this->megabytes = abs(megabytes);
}

void BusinessPRO::GetMegabytes()
{
	cout << "�� ���� ������ �������� " << this->megabytes << " ���������� �������� ���������." << endl;
}