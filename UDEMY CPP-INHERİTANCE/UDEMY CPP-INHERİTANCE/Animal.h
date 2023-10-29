#pragma once
#include <iostream>
using namespace std;

class Animal
{
public:
	Animal(string _name);
	void nutrition();
	void sleep();
	void setName(string _name);
	string getName();

private:
	string name;

};



