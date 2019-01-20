#include "Zadanie8.h"
Zadanie8::Zadanie8()
{

}

Zadanie8::~Zadanie8()
{

}
int Zadanie8::sumaPetla(int n)
{
    int wynik = 0;
    for(int i=1; i<=n; i++)// <= bo włacznie z n; od i=1 bo jak jest samo zero to i tak wynik wcześniej był 0 więc po co
    {
        wynik+=i;
    }
    return wynik;
}
int Zadanie8::sumaReku(int n)
{
    if(n==0)//jeśli ostatni element bo od 0 do n
    {
        return 0;//zwroc całkowitą 0 bo no to jest 0
    }else // a jak nie
    {
        return n+sumaReku(n-1);//zwróć aktualne n + wynik tej samej funkcji od liczby o jeden mniejszej
    }
    //będzie to tak biegło póki n nie będzie 0
}
int Zadanie8::sumaWzor(int n)
{
    return ( (0+n) * (n+1) ) / 2;
}
void Zadanie8::run()
{
	cout<<"Zadanie8"<<endl<<endl;
	pokazTresc();
	int n;
	cout<<"Wprowadz n"<<endl;
	cin>>n;
	cout<<"Suma w pętli"<<endl;
	cout<<sumaPetla(n)<<endl;
	cout<<"Suma rekurencyjnie"<<endl;
	cout<<sumaReku(n)<<endl;
	cout<<"Suma Wzór"<<endl;
	cout<<sumaWzor(n)<<endl;
}
