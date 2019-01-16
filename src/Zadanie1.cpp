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
    if(bezwzgl<epsilon)
    {
        cout<<"trafiłeś, to jest ta liczba w granicach błędu"<<endl;
    }else if(randliczba<liczba)
    {
        cout<<"liczba za duża"<<endl;
    }
    else
    {
        cout<<"liczba za mała"<<endl;
    }
}
void Zadanie1::run()
{
    //comment
    cout<<"Zadanie1"<<endl<<endl;
    int liczba, epsilon;
    cout<<"Podaj liczbę"<<endl;
    cin>>liczba;
    cout<<"Podaj epsilon"<<endl;
    cin>>epsilon;
    podajLiczbe(liczba,epsilon);
    cout<<"-----------"<<endl<<endl;
}
