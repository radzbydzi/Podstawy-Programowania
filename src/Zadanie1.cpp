#include "Zadanie1.h"
#include <math.h>
#include <ctime>
#include <cstdlib>

Zadanie1::Zadanie1()
{
    //ctor
}

Zadanie1::~Zadanie1()
{
    //dtor
}
void Zadanie1::podajLiczbe(int liczba, int epsilon)
{
    srand( time( NULL ) );
    int randliczba = rand();
    int bezwzgl = abs(randliczba - liczba);//wartoœæ bezwzglêdna z róznicy wylosowanej i podanej
    cout<<"Wylosowana liczba:"<< randliczba <<endl;
}
void Zadanie1::run()
{
}
