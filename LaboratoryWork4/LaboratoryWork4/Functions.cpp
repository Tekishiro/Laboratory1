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

void Tarif::ShowFee()
{
	cout << "����������� ����� ������: " << this->fee << " ������ � �����." << endl;
}

void Corp::SetAssociate(int associate)
{
	this->associate = abs(associate);
}

void Corp::ShowAssociate()
{
	cout << "���������� ������ �� ������: " << this->associate << endl;
}

void Corp::Show()
{
	cout << "����������� ����� ������: " << this->fee << " ������ � �����." << endl;
	cout << "���������� ������ �� ������: " << this->associate << endl;
}

void Individual::SetFreeMins(int freemins)
{
	this->freemins = abs(freemins);
}

void Individual::ShowFreeMins()
{
	cout << "�� ���� ������ �������� " << this->freemins << " ���������� �����." << endl;
}

void Individual::Show()
{
	cout << "����������� ����� ������: " << this->fee << " ������ � �����." << endl;
	cout << "�� ���� ������ �������� " << this->freemins << " ���������� �����." << endl;
}

void Standart::SetFreeSms(int freesms)
{
	this->freesms = abs(freesms);
}

void Standart::ShowFreeSms()
{
	cout << "�� ���� ������ �������� " << this->freesms << " ��������� ���." << endl;
}

void Standart::Show()
{
	cout << "����������� ����� ������: " << this->fee << " ������ � �����." << endl;
	cout << "�� ���� ������ �������� " << this->freesms << " ��������� ���." << endl;
}

void BusinessPRO::SetMegabytes(int megabytes)
{
	this->megabytes = abs(megabytes);
}

void BusinessPRO::ShowMegabytes()
{
	cout << "�� ���� ������ �������� " << this->megabytes << " ���������� �������� ���������." << endl;
}

void BusinessPRO::Show()
{
	cout << "����������� ����� ������: " << this->fee << " ������ � �����." << endl;
	cout << "�� ���� ������ �������� " << this->megabytes << " ���������� �������� ���������." << endl;
}