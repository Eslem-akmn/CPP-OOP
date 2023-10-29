#include "Dog.h"

int Dog::dogNum = 0;

//constructor
Dog::Dog(string _name) :Animal(_name)
{
	dogNum++;
}

//destructor
Dog::~Dog()
{
	dogNum--;
}

void Dog::bark()
{
	cout << Animal::getName() << " bark bark!!" << endl;
}
