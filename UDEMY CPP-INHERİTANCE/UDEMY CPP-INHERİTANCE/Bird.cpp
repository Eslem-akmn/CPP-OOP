#include "Bird.h"

//constructor
Bird::Bird(string _name) : Animal(_name)
{
}

void Bird::fly()
{
	cout << Animal::getName() << " is flying..";
}