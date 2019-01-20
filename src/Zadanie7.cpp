#include "Zadanie7.h"
Zadanie7::Zadanie7()
{

}

Zadanie7::~Zadanie7()
{

}
int Zadanie7::wspak(char dane[], char wynik[])
{
    int dl_dane = sizeof(dane)/sizeof(char);//ilość bajtów które zajmuje tablca przez ilość bajtów które potrzebuje pojedynczy char -> daje wymiar
    int dl_wyniki = sizeof(wynik)/sizeof(char);
    if(dl_dane!=dl_wyniki)//no jak nie są takie same to jest gnój
    {
        return -1;//cośtam niech dziwnego zwróci, żeby wiadomo było że gnój
    }
    for(int i=0; i<dl_dane; i++)//od lewej do prawej z danych
    {
        wynik[(dl_dane-1)-i] = dane[i];
        //indeks wyniku jest (dl_dane-1)-i ponieważ
        //jest to ostatni element przy i=0 i pierwszy przy i=maks(czyli dl_dane-1 [jest tam minus 1 bo liczyby tablice od 0 do n-1])
        //czyli skrajnie lewy jest dla wyniku skrajnie prawym
    }
    return 0;//wartość że się udało, też nie jest ważna, ale int powinien coś zwracać
}
void Zadanie7::pokazTab(char tab[])//funkcja od pokazywania tablicy
{
    int dl = sizeof(tab)/sizeof(char);
    for(int i=0; i<dl; i++)
    {
        cout<<tab[i]<<" ";//wyświetl element i spację
    }
    cout<<endl; // wyświetla znak końca linii
}
void Zadanie7::run()
{
	cout<<"Zadanie7"<<endl<<endl;
	pokazTresc();
	char tab[10], odwr[10];//10 bo tak ustaliłem

	cout<<"Wprowadź 10 elemntów w tablice"<<endl;

	for(int i=0; i<10; i++)//od 0 do 10-1=9
	{
        cout << "Wprowadź znak "<<i<<": ";
        cin>>tab[i];
	}

	cout<<endl;//enterek

	cout<<"Pokaz nieodwrócone"<<endl;
	pokazTab(tab);//pokaz nieodwrocone
	cout<<"Pokaz odwrócone"<<endl;
	wspak(tab,odwr);//odwroc tab, zapisz do odwr
	pokazTab(odwr);//pokaz
}
