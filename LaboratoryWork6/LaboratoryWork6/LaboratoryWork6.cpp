// LaboratoryWork6.cpp: определяет точку входа для консольного приложения.
//


//Класс - стек Stack.Дополнительно перегрузить следующие операции :
//*-добавить элемент в стек; / -извлечь элемент из стека; 
//bool() - проверка, есть ли в стеке отрицатеьные элменты; == -сравнения стеков.


#include "stdafx.h"
#include <iostream>
using namespace std;

class Stack
{
public:
	int value;
	Stack *next;
	Stack *head = 0;

	Stack(int value = 0) { this->value = value; cout << "created!" << endl; }

	void Push(int val)
	{
		if (!head)
		{
			Stack *temp = new Stack(val);
			head = temp;
		}
		else
		{
			Stack *temp = new Stack(val);
			temp->next = head;
			head = temp;
		}
	}

	void Pop()
	{
		Stack *temp = head;
		head = head->next;
		int val = temp->value;
		delete temp;
		cout << val << endl;
	}

	void ShowAll()
	{
		while (head->next != NULL)
		{
			Pop();
		}
	}

	friend void operator * (Stack a, int val)
	{
			Stack *temp = new Stack(val);
			temp->next = a.head;
			a.head = temp;
	}

	friend void operator / (Stack a, int num)
	{
		for (int i = 0; i < num; i++)
		{
			if (a.head == NULL)
			{
				cout << "Stack is empty" << endl;
				break;
			}
			else
			{
				Stack *temp = a.head;
				a.head = a.head->next;
				int val = temp->value;
				cout<<val<<endl;
			}
			
		}
		
	}

	friend bool operator ==(Stack a, Stack b)
	{
		if (a.head->value == b.head->value) return true;
		else return false;
	}

};

int main()
{
	system("chcp 1251");
	Stack stk1, stk2;
	int n, s;
	cout << "Сколько элементов ввести в стек:" << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Введите " << i+1 << "-й элемент:" << endl;
		cin >> s;
		stk1.Push(s);
		stk2.Push(s);
	}

	//stk1 * 10;
	//stk / 1;

	if (stk1 == stk2) cout << "Стеки равны" << endl;
	else cout << "Стеки не равны" << endl;

	system("pause");

	stk1.ShowAll();

    return 0;
}