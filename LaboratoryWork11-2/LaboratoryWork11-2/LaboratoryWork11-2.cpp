// LaboratoryWork11-2.cpp : Defines the entry point for the console application.
//

//� ������� � 1 ��������� ��������� :
//1. ������� ������ - ��������� � ������������  � ��������� �������
//� ��������� ��� �������, ��� ������� ������������ ��������� �������.����������� ���������. 
//2. �������� ���������, ������ �� ���� ���� �������� � ������� ������. 
//3. ����������� ���������, ��������� ��� ������� � ��������� ���������. 
//4. ������� ������ ��������� ����� �� ������ � ��������� ��� ������� ���� �� ����, ��� � ������ ���������. 
//5. �������� ������ ���������, ������ �� ���� n ��������� ����� ���������
//� ������� ����� � ���� ��� �������� �� ������� ����������.
//����������� ������  � ������ ����������.





#include "stdafx.h"
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;




class Chislo
{
public:
	int num;
	Chislo(int num)
	{
		this->num = num;
	}
	Chislo() {}
};

istream& operator >> (istream& input, Chislo& x)
{
	cout << "������� ���� ������: ";
	input >> x.num;
	return input;
}

ostream& operator << (ostream& output, const Chislo& x)
{
	return output << x.num;
}


int main()
{
	system("chcp 1251");
	map<int, Chislo> MyMap;
	map<int, Chislo> MyMap2;
	map<int, Chislo> ::iterator iter;
	map<int, Chislo> ::iterator iter2;

	int n = 0, a = 0, b = 0;;
	Chislo � = 0;

	cout << "���� ������� ���������� " << endl;
	cout << "������� ����� ���������: " << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "������� ���� � ��������" << endl;
		cin >> a;
		cin >> �;
		MyMap[a] = �;
	}

	cout << "����� �� �����: " << endl;
	for (iter = MyMap.begin(); iter != MyMap.end(); iter++)
	{
		cout << "����: " << iter->first << "  ��������: "; cout << iter->second << endl;
	}


	cout << endl << "������� ��� ������������� ��������" << endl;


	for (iter = MyMap.begin(); iter != MyMap.end(); iter++)
	{
		if (iter->second.num < 0)
		{
			iter2 = iter++;
			MyMap.erase(iter2);
			if (iter == MyMap.end()) break;

			
		}
	}

	cout << "����� �� �����: " << endl;
	for (iter = MyMap.begin(); iter != MyMap.end(); iter++)
	{
		cout << "����: " << iter->first << "  ��������: " << iter->second << endl;
	}



	Chislo C = 0;
	cout << "���� ������� ���������� " << endl;
	cout << "������� ����� ���������: " << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "������� ���� � ��������" << endl;
		cin >> a;
		cin >> C;
		MyMap2[a] = C;
	}

	cout << "����� �� ����� ������� ����������: " << endl;
	for (iter = MyMap2.begin(); iter != MyMap2.end(); iter++)
	{
		cout << "����: " << iter->first << "  ��������: " << iter->second << endl;
	}







	cout << "������� ����� �������� � ����� ���������, ��������� �� ���: " << endl;
	cin >> a >> b;
	int i = 0;
	for (iter = MyMap.begin(), i = 0; i < a; i++)
	{
		if (iter == MyMap.end()) break;
		iter++;
	}

	for (iter2 = iter, i = 0; i < b; i++)
	{
		if (iter2 == MyMap.end()) break;
		iter2++;
	}

	MyMap.erase(iter, iter2);



	cout << "����� �� ����� ����������� ������� ����������: " << endl;
	for (iter = MyMap.begin(); iter != MyMap.end(); iter++)
	{
		cout << "����: " << iter->first << "  ��������: " << iter->second << endl;
	}


	for (iter = MyMap2.begin(); iter != MyMap2.end(); iter++)
	{
		MyMap[iter->first] = iter->second;
	}



	cout << "����� �� ����� ������� ����������, ������������ ���������� �������: " << endl;
	for (iter = MyMap.begin(); iter != MyMap.end(); iter++)
	{
		cout << "����: " << iter->first << "  ��������: " << iter->second << endl;
	}

	return 0;
}

