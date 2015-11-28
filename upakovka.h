#pragma once
#include "flower.h"
class Upakovka :
	public Flower
{
char *material;
public:
Upakovka(char *mater)
	{
		this->material=mater;

}
Upakovka();
void setmaterial( char *material);
void getmaterial();
~Upakovka(void);

void Print() { 
	cout << "Материал упаковки: " << material <<endl;}
};
