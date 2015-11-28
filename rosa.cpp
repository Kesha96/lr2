#include "StdAfx.h"
#include "rosa.h"
#include <iostream>
using namespace std;
Rosa::Rosa(void)
{
cout<<"вызывается конструктор розы"<<endl;
}
void Rosa::setcolor( char *color)
{
this->color=color;
}
void Rosa::getcolor()
{
cout<<"цвет розы: "<<this->color<<endl;
}
Rosa::~Rosa(void)
{
cout<<"вызывается деструктор розы"<<endl;
}
