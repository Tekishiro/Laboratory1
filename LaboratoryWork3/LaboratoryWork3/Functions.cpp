#include "stdafx.h"
#include <iostream>
//#include <string>
//#include <string.h>
#include "Classes.h"
using namespace std;

//������ � �����, �������������, �������������, ��������, ������ ��� � �.�.

void Tarif::SetFee(int fee)
{
	this->fee = fee;
}

void Tarif::GetFee()
{
	cout << "����������� ����� ������: " << this->fee << " ������ � �����." << endl;
}

void Corp::SetAssociate(int associate)
{
	this->associate = associate;
}

void Corp::GetAssociate()
{
	cout << "���������� ������ �� ������: " << this->associate << endl;
}

void Individual::SetFreeMins(int freemins)
{
	this->freemins = freemins;
}

void Individual::GetFreeMins()
{
	cout << "�� ���� ������ �������� " << this->freemins << " ���������� �����." << endl;
}

void Standart::SetFreeSms(int freesms)
{
	this->freesms = freesms;
}

void Standart::GetFreeSms()
{
	cout << "�� ���� ������ �������� " << this->freesms << " ��������� ���." << endl;
}

void BusinessPRO::SetMegabytes(int megabytes)
{
	this->megabytes = megabytes;
}

void BusinessPRO::GetMegabytes()
{
	cout << "�� ���� ������ �������� " << this->megabytes << " ���������� �������� ���������." << endl;
}