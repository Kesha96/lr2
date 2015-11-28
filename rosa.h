#pragma once
#include "flower.h"
using namespace std;
class Rosa :
	public Flower
{
char *color;
public:
Rosa(char *col)
{
	this->color=col;

}
Rosa();
void setcolor( char *color);
void getcolor();
~Rosa(void);

void Print() { 
		cout << "Цвет розы : " << color <<endl;}
};
