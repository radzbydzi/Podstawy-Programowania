#include "Zadanie9.h"
Zadanie9::Zadanie9()
{

}

Zadanie9::~Zadanie9()
{

}

void Zadanie9::zyskPo(float kapital, float procent, int lata)
{
    //jesli kapitalizujemy w nastepnym roku od poprzedniej kwoty z odsetkami
    cout<<"Kwota na koncie: "<<kapital<<endl;

    for(int i=1; i<=lata; i++)
    {
        float odsetki = kapital * (procent/100) * 1;
        kapital+=odsetki;
        cout<<"Kapitał w roku "<<i<<": "<<kapital<<" (zyskano "<<odsetki<<")"<<endl;
    }
}

void Zadanie9::run()
{
	cout<<"Zadanie9"<<endl<<endl;
	pokazTresc();
	float kapital, procent;
	int lata;

	cout<<"Wprowadz kapital"<<endl;
	cin>>kapital;
	cout<<"Wprowadz procent"<<endl;
	cin>>procent;
	cout<<"Wprowadz lata"<<endl;
	cin>>lata;
    zyskPo(kapital,procent,lata);
}
