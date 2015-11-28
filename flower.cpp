#include "stdafx.h"
#include "flower.h"
#include <iostream>
using namespace std;

Flower::Flower(void)
{ 
	cout<<"вызывается конструктор цветы"<<endl;
}
void Flower::setname (char *a, char *b)
{
	this->a=a;
	this->b=b;
}

void Flower::getname()
{
	cout<<"имя цветка:"<<this->a<<endl;
}
Flower::~Flower(void)
{
cout<<"вызывается деструктор цветка"<<endl;
}
