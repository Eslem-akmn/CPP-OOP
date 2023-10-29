#pragma once
#include "Animal.h"

class Bird : public Animal
{
public:
	Bird(string _name);
	void fly();
};
