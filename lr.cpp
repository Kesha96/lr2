#include "stdafx.h"
#include "locale"
#include <iostream>
#include "flower.h"
#include "rosa.h"
#include "hrisantem.h"
#include "stebel.h"
#include "upakovka.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{setlocale(LC_ALL, "RU");

 Flower *Fl = new Flower("роза,", "хризантема");
 Fl->Print();

 Rosa *R = new Rosa ("красный");
 R->Print();

 Hrisantem *Hr = new Hrisantem ("желтая");
 Hr->Print();

 Stebel *St = new Stebel ("зеленый");
 St->Print();

 Upakovka *Up = new Upakovka ("бумага");
 Up->Print();

  /*Flower a;
  a.setname("ромашка");
  a.getname ();
  cout<<endl;
  
  Rosa b;
  b.setcolor("красный");
  b.getcolor();
  cout<<endl;

  Hrisantem c;
  c.setcolor("желтая");
  c.getcolor();
  cout<<endl;

  Stebel d;
  d.setcolor("зеленый");
  d.getcolor();
  cout<<endl;

  Upakovka e;
  e.setmaterial("бумага");
  e.getmaterial();
  cout<<endl;

	return 0;*/
}
