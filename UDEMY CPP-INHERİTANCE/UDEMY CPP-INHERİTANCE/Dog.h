#pragma once
#include "Animal.h"

class Dog : public Animal
{
public:
	Dog(string _name);
	~Dog();
	void bark();
	static int getDogNum()
	{
		return dogNum;
	};

private:
	static int dogNum;
};