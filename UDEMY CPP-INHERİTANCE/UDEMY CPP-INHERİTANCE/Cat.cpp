#include "Cat.h"

//constructor
Cat::Cat(string _name) : Animal(_name)
{
	//Ek yap�lacak i�lemler buraya yaz�l�r..
}
void Cat::mouseCatch()
{
	cout << Animal::getName() << " is catching mouse.." << endl;
}