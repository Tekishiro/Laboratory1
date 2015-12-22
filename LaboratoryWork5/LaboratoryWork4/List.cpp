#include "stdafx.h"
#include <iostream>
#include "List.h"
#include "Classes.h"
using namespace std;

 void List::ShowAll()
{
	if (head == NULL) cout << "Список пуст!" << endl;
	Tarif *p;
	p = head;
	while (p)
	{
		p->Show();
		cout << "-----------------------------------" << endl;
		p = p->next;
	}
}

void List::Insert(Tarif *p)
{
	Tarif *t;
	t = head;
	head = p;
	p->next = t;
}