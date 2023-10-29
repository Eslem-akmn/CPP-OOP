#include "Cat.h"

//constructor
Cat::Cat(string _name) : Animal(_name)
{
	//Ek yapýlacak iþlemler buraya yazýlýr..
}
void Cat::mouseCatch()
{
	cout << Animal::getName() << " is catching mouse.." << endl;
}