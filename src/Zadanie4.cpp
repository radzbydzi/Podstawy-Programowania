#include "Zadanie4.h"
#include <math.h>
#include <ctime>
#include <cstdlib>

Zadanie4::Zadanie4()
{
    //ctor
}

Zadanie4::~Zadanie4()
{
    //dtor
}

void Zadanie4::fkwadr(double a, double b, double c)
{
    //delta = b^2 + 4ac
    double delta = b*b - 4*a*c;
    cout<<"Równanie "<<a<<"*x^2"<<" + "<<b<<"*x "<<"+ "<<c<<endl;
    cout<<"Delta "<<delta<<endl;
    if(delta>0){}

void Zadanie4::run()
{
}
