#pragma once
#include "Animal.h"

class Cat : public Animal
{
public:
	Cat(string _name);
	void mouseCatch();
};