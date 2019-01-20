#include "Zadanie.h"


Zadanie::Zadanie()
{
    //ctor
}

Zadanie::~Zadanie()
{
    //dtor
}
void Zadanie::pokazTresc()
{
    cout<<tresc<<endl<<endl;
    cout<<"-----------"<<endl<<endl;
}
void Zadanie::setTresc(string tresc)
{
    this->tresc = tresc;
}
/*void Zadanie::run()
{
    cout<<"Default run"<<endl<<endl;
}*/
