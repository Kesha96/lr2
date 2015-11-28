#pragma once
#include <iostream>
using namespace std;
class Flower
{
char *a;
char *b;
public:
	Flower(char *name_r, char *name_h)
	{
		this ->a = name_r;
		this ->b = name_h;
	}
	Flower ();
void setname(char *a, char *b);
void getname();
~Flower(void);
virtual void Print()
	{
	cout << "виды: " << a<< " "<<b<<endl;

	}
};
