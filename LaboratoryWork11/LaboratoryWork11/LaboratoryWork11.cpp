// LaboratoryWork11.cpp : Defines the entry point for the console application.
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



int main()
{
	system("chcp 1251");
	map<int, int> MyMap;
	map<int, int> MyMap2;
	map<int, int> ::iterator iter;
	map<int, int> ::iterator iter2;

	int n = 0, a = 0, b = 0;

	cout << "���� ������� ���������� " << endl;
	cout << "������� ����� ���������: " << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "������� ���� � ��������" << endl;
		cin >> a;
		cin >> b;
		//MyMap.insert(pair<int, int>(a, b));
		MyMap[a] = b;
	}

	cout << "����� �� �����: " << endl;
	for (iter = MyMap.begin(); iter != MyMap.end(); iter++)
	{
		cout << "����: " << iter->first << "  ��������: " << iter->second << endl;
	}


	cout << endl << "������� ��� ������������� ��������" << endl;
	//cout <<"��� �������� � �������������� ���������� �������� �� �������������" << endl;


	for (iter = MyMap.begin(); iter != MyMap.end(); iter++)
	{
		if (iter->second < 0)
		{
			iter2 = iter++;
			MyMap.erase(iter2);
			if (iter == MyMap.end()) break;

			//MyMap.erase(iter)++;
			//if (iter == MyMap.end()) break;
		}
	}

	cout << "����� �� �����: " << endl;
	for (iter = MyMap.begin(); iter != MyMap.end(); iter++)
	{
		cout << "����: " << iter->first << "  ��������: " << iter->second << endl;
	}



	cout << "���� ������� ���������� " << endl;
	cout << "������� ����� ���������: " << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "������� ���� � ��������" << endl;
		cin >> a;
		cin >> b;
		//MyMap.insert(pair<int, int>(a, b));
		MyMap2[a] = b;
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