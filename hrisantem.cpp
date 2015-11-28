#include "StdAfx.h"
#include "hrisantem.h"
#include <iostream>
using namespace std;
Hrisantem::Hrisantem(void)
{
cout<<"вызывается конструктор хризантемы "<<endl;
}
void Hrisantem::setcolor( char *color)
{
this->color=color;
}
void Hrisantem::getcolor()
{
cout<<"цвет хризантемы: "<<this->color<<endl;
}
Hrisantem::~Hrisantem(void)
{
cout<<"вызывается деструктор хризантемы"<<endl;
}
