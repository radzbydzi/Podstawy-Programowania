#ifndef ZADANIE1_H
#define ZADANIE1_H
#include "Zadanie.h"

class Zadanie1 : public Zadanie
{
    public:
        Zadanie1();
        virtual ~Zadanie1();

        void run();
    protected:

    private:
	void podajLiczbe(int liczba, int epsilon);
};
//komentarz
#endif // ZADANIE1_H
