#include "Animal.h"

Animal::Animal(string _name)
{
	Animal::name = _name;
}

void Animal::nutrition()
{
	cout << Animal::name << " is eating.." << endl;
}
void Animal::sleep()
{
	cout << Animal::name << " is sleeping .." << endl;
}
void Animal::setName(string _name)
{
	name = _name;
}
string Animal::getName()
{
	return name;
}

