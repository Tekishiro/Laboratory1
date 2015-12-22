// LaboratoryWork11-2.cpp : Defines the entry point for the console application.
//

//В проекте № 1 выполнить следующее :
//1. Создать объект - контейнер в соответствии  с вариантом задания
//и заполнить его данными, тип которых определяется вариантом задания.Просмотреть контейнер. 
//2. Изменить контейнер, удалив из него одни элементы и заменив другие. 
//3. Просмотреть контейнер, используя для доступа к элементам итераторы. 
//4. Создать второй контейнер этого же класса и заполнить его данными того же типа, что и первый контейнер. 
//5. Изменить первый контейнер, удалив из него n элементов после заданного
//и добавив затем в него все элементы из второго контейнера.
//Просмотреть первый  и второй контейнеры.





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
	cout << "Введите поле класса: ";
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
	Chislo С = 0;

	cout << "Ввод первого контейнера " << endl;
	cout << "Введите число элементов: " << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Введите ключ и значение" << endl;
		cin >> a;
		cin >> С;
		MyMap[a] = С;
	}

	cout << "Вывод на экран: " << endl;
	for (iter = MyMap.begin(); iter != MyMap.end(); iter++)
	{
		cout << "Ключ: " << iter->first << "  Значение: "; cout << iter->second << endl;
	}


	cout << endl << "Удаляем все отрицательные элементы" << endl;


	for (iter = MyMap.begin(); iter != MyMap.end(); iter++)
	{
		if (iter->second.num < 0)
		{
			iter2 = iter++;
			MyMap.erase(iter2);
			if (iter == MyMap.end()) break;

			
		}
	}

	cout << "Вывод на экран: " << endl;
	for (iter = MyMap.begin(); iter != MyMap.end(); iter++)
	{
		cout << "Ключ: " << iter->first << "  Значение: " << iter->second << endl;
	}



	Chislo C = 0;
	cout << "Ввод второго контейнера " << endl;
	cout << "Введите число элементов: " << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Введите ключ и значение" << endl;
		cin >> a;
		cin >> C;
		MyMap2[a] = C;
	}

	cout << "Вывод на экран второго контейнера: " << endl;
	for (iter = MyMap2.begin(); iter != MyMap2.end(); iter++)
	{
		cout << "Ключ: " << iter->first << "  Значение: " << iter->second << endl;
	}







	cout << "Введите номер элемента и число элементов, удаляемых за ним: " << endl;
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



	cout << "Вывод на экран обрезанного первого контейнера: " << endl;
	for (iter = MyMap.begin(); iter != MyMap.end(); iter++)
	{
		cout << "Ключ: " << iter->first << "  Значение: " << iter->second << endl;
	}


	for (iter = MyMap2.begin(); iter != MyMap2.end(); iter++)
	{
		MyMap[iter->first] = iter->second;
	}



	cout << "Вывод на экран первого контейнера, дополненного элементами второго: " << endl;
	for (iter = MyMap.begin(); iter != MyMap.end(); iter++)
	{
		cout << "Ключ: " << iter->first << "  Значение: " << iter->second << endl;
	}

	return 0;
}

