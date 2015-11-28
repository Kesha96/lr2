#pragma once
#include "flower.h"
using namespace std;
class Stebel :
	public Flower
{
char *color;
public:
Stebel(char *col)
	{
	this->color=col;

}
Stebel();
void setcolor( char *color);
void getcolor();
~Stebel(void);
void Print() { 
		cout << "Цвет стебля : " << color <<endl;}

};
