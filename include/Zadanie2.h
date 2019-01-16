#ifndef ZADANIE2_H
#define ZADANIE2_H
#include "Zadanie.h"

class Zadanie2 : public Zadanie
{
    public:
        Zadanie2();
        virtual ~Zadanie2();

        void run();

    protected:

    private:
	void sprawdzZnak(char znak);
};

#endif // ZADANIE2_H
