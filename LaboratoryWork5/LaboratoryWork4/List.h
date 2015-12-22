#pragma once

#include <iostream>
#include "Classes.h"
using namespace std;

class List
{
public:
	static Tarif *head;
	//Tarif *head;
	List()
	{
	}

	virtual ~List()
	{

	}


	void Insert(Tarif *);

	static void ShowAll();
	//void ShowAll();

	int ListCount()
	{
		int ListCounter = 0;
		if (head == NULL) return 0;
		Tarif *p;
		p = head;
		while (p)
		{
			ListCounter++;
			p = p->next;
		}
		return ListCounter;
	}





	//void Van::Sort() {
	//	coffee * temp = head;
	//	while (temp) {
	//		coffee * temp2 = temp->next;
	//		while (temp2) {
	//			if (temp->data->getWeight() > temp2->data->getWeight()) {
	//				Coffee * swap = temp->data;
	//				temp->data = temp2->data;
	//				temp2->data = swap;
	//			}
	//			temp2 = temp2->next;
	//		}
	//		temp = temp->next;
	//	}



	void Sort()
	{
		for (int i = 0; i < 10; i++)
		{
			Tarif *temp = head;
			while (temp)
			{
				Tarif *temp2 = temp->next;
				while (temp2)
				{
					if (temp->GetFee() > temp2->GetFee())
					{
						Tarif *swap = temp;
						swap->next = temp->next;
						temp = temp2;
						temp->next = temp2->next;
						temp2 = swap;
						temp2->next = swap->next;
					}
					temp2 = temp2->next;
				}
				temp = temp->next;
			}
		}
	}


	void SearchTarif(int MinFee, int MaxFee)
	{
		if (head == NULL) cout << "Список пуст!" << endl;
		Tarif *p;
		p = head;
		while (p)
		{
			if (p->GetFee() > MinFee && p->GetFee() < MaxFee)
				p->Show();
			p = p->next;
		}
		
	}

};