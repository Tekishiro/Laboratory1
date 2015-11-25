// LaboratoryWork6(2).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

template <class T> class Stack
{
private:
	T *array;
	int index = 0;
	int maxsize = 10;
public:
	Stack(int size)
	{
		array = new T[size];
	}

	void push(T value)
	{
		*(array + index++) = value;
	}

	void pop()
	{
		index--;
	}

	void show()
	{
		cout << endl;
		for (int i = index-1; i >= 0; i--)
		{
			cout << *(array + i) << "  ";
		}
		cout << endl;
	}

	void operator *(T value)
	{
		this->push(value);
	}

	void operator /(int counter)
	{
		for (int i = 0; i < counter; i++)
		{
			this->pop();
		}
	}

	friend bool operator ==(Stack &a, Stack &b)
	{
		if (a.index != b.index) return false;
		for (int i = 0; i < a.index; i++)
			if (*(a.array + i) != *(b.array + i)) return false;
		return true;
	}

	operator bool()
	{
		for (int i = 0; i < index; i++)
		{
			if (*(array + i) < 0) return false;
		}
		return true;
	}

	int MyF(T val)
	{
		int counter = 0;
		for (int i = 0; i < index; i++)
		{
			if (*(array + i) < val) counter++;
		}
		return counter;
	}

};

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


ostream& operator << (ostream& output, const Chislo& x)
{
	return output << x.num;
}




int main()
{
	system("chcp 1251");
	int n;
	cout << "Сколько элементов ввести в стек: " << endl;
	cin >> n;
	Stack <int> S(n);
	Stack <int> S2(n);
	for (int i = 0; i < n; i++)
	{
		int temp;
		cout << "Введите " << i+1 <<"-й элемент: " << endl;
		cin >> temp;
		S.push(temp);
		S2 * temp;
	}
	cout << "Стек 1: "; S.show();
	S2 / 1;
	cout << "Стек 2: "; S2.show();
	if (S == S2) cout << "Стеки равны" << endl; else cout << "Стеки не равны" << endl;
	if (bool(S)) cout << "Стек положителен" << endl; else cout << "Стек отрицателен" << endl;

	int N;
	cout << "Введите граничный элемент: " << endl;
	cin >> N;
	cout << "Количество элементов в стеке меньше граничного: " << S.MyF(N) << endl;

	Stack <string> SS(3);
	SS.push("Ololo");
	SS.push("Trololo");
	SS.push("asdasffa");
	SS.pop();
	SS.show();








	cout << "Пример работы стека на пользовательском классе:" << endl;
	cout << "Сколько элементов ввести в стек: " << endl;
	cin >> n;
	Stack <Chislo> SM(n);
	for (int i = 0; i < n; i++)
	{
		int temp;
		cout << "Введите " << i + 1 << "-й элемент: " << endl;
		cin >> temp;
		SM.push(Chislo(temp));
	}
	cout << "Стек на основе пользовательского класса: "; SM.show();

    return 0;
}

