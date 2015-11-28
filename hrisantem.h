#pragma once
#include "flower.h"
using namespace std;
class Hrisantem :
	public Flower
{
char *color;
public:
Hrisantem(char *col)
{
	this->color=col;

}
Hrisantem();
void setcolor( char *color);
void getcolor();
~Hrisantem(void);
void Print() { 
		cout << "Цвет хризантемы : " << color <<endl;}

};
