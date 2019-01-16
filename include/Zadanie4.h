#ifndef ZADANIE4_H
#define ZADANIE4_H
#include "Zadanie.h"

class Zadanie4 : public Zadanie
{
    public:
        Zadanie4();
        virtual ~Zadanie4();

        void run();

    protected:

    private:
        void fkwadr(double a, double b, double c);
};

#endif // ZADANIE4_H
