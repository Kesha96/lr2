#include "StdAfx.h"
#include "stebel.h"
#include <iostream>
using namespace std;
Stebel::Stebel(void)
{
cout<<"вызывается конструктор стебель"<<endl;
}
void Stebel::setcolor( char *color)
{
this->color=color;
}
void Stebel::getcolor()
{
cout<<"цвет стебля: "<<this->color<<endl;
}
Stebel::~Stebel(void)
{
cout<<"вызывается деструктор стебель"<<endl;
}
