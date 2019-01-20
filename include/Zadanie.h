#ifndef ZADANIE_H
#define ZADANIE_H

#include <iostream>
#include <stdio.h>
#include <clocale>
using namespace std;

class Zadanie
{
    public:
        Zadanie();
        virtual ~Zadanie();
        virtual void run()=0;
        void pokazTresc();
        void setTresc(string tresc);
    protected:
        string tresc="Domyslna tresc";
    private:
};

#endif // ZADANIE_H
