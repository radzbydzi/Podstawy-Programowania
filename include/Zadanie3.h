#ifndef ZADANIE3_H
#define ZADANIE3_H
#include "Zadanie.h"

class Zadanie3 : public Zadanie
{
    public:
        Zadanie3();
        virtual ~Zadanie3();

        void run();

    protected:

    private:
        void wprowadzTab(char tab[]); //kod jest w pliku zadanie3.cpp
};

#endif // ZADANIE3_H
