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
}
