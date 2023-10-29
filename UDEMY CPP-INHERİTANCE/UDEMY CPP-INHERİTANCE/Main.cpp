#include <iostream>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "Bird.h"
using namespace std;



int main()
{
	Cat dido("Dido");
	dido.nutrition();
	dido.sleep();
	dido.mouseCatch();
	cout << endl << endl;
	Dog matilda("Matilda");
	matilda.nutrition();
	matilda.sleep();
	matilda.bark();
	cout << endl << endl;;
	Dog duke("Duke");
	duke.nutrition();
	duke.sleep();
	duke.bark();
	cout << endl << endl;
	Dog* teddy = new Dog("Teddy");
	cout << "Number of dogs: " << Dog::getDogNum()<<endl; //3
	delete teddy;
	cout << "Number of dogs: " << Dog::getDogNum() << endl; //2
	cout << endl << endl;
	Bird buddy("Buddy");
	buddy.nutrition();
	buddy.sleep();
	buddy.fly();
	cout << endl << endl;
	

	cout << endl;
	return 0;
}