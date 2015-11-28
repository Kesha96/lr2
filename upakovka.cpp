#include "StdAfx.h"
#include "upakovka.h"
#include <iostream>
using namespace std;
Upakovka::Upakovka(void)
{
cout<<"вызывается конструктор упаковки"<<endl;
}
void Upakovka::setmaterial( char *material)
{
this->material=material;
}
void Upakovka::getmaterial()
{
cout<<"материал упаковки: "<<this->material<<endl;
}
Upakovka::~Upakovka(void)
{
cout<<"вызывается деструктор упаковки"<<endl;
}
