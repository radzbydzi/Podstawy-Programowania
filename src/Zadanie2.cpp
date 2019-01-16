#include "Zadanie2.h"
#include <math.h>
#include <ctime>
#include <cstdlib>

Zadanie2::Zadanie2()
{
    //ctor
}

Zadanie2::~Zadanie2()
{
    //dtor
}
void Zadanie2::sprawdzZnak(char znak)
{
 //a - 97 z - 122
    //A - 65 Z - 90
    //0 - 48 9 - 57
    //cout<<(int)'9'<<endl;
    //kody ASCII

	if(znak>=97 && znak<=122)
    {
        	cout<<"Wprowadzono maġṗ literê"<<endl;}
else if(znak>=65 && znak<=90)
    {
        cout<<"Wprowadzono duṡṗ literê"<<endl;
    }

}
void Zadanie2::run()
{
}
