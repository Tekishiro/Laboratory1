#pragma once

#include <iostream>
#include "Classes.h"
using namespace std;

class List
{
public:
	//static Tarif *head;
	Tarif *head;
	List()
	{
	}

	virtual ~List()
	{

	}


	void Insert(Tarif *);

	//static void ShowAll();
	void ShowAll();


	
};