#include "Zadanie3.h"
#include <math.h>
#include <ctime>
#include <cstdlib>

Zadanie3::Zadanie3()
{
    //ctor
}

Zadanie3::~Zadanie3()
{
    //dtor
}

void Zadanie3::wprowadzTab(char tab[])
{
    int il_zn=0;
    for(int i=0; i<21; i++)
    {
        cout<<tab[i]<<endl;
        if(i>0)
        {
            if(tab[i]==NULL)
            {
                il_zn = i;
                break;
            }
        }

    }
    cout<<endl<<"Ciag ma "<<il_zn<<" znakow"<<endl;
}

void Zadanie3::run()
{
    cout<<"Zadanie3"<<endl<<endl;
    char tab[21]={NULL};// sprawiamy ṡe kaṡda wartoæ tablicy to NULL czyli znak \0 (czyscimy tabilice z niepoṡṗdanych wartoci)
    cout<<"Wprowad do 20 znaków"<<endl;
    cin>>tab;
    wprowadzTab(tab);//uruchamia funkcjê
    cout<<"-----------"<<endl<<endl;
}
