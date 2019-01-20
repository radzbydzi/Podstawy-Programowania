#ifndef ZADANIE7_H
#define ZADANIE7_H
#include "Zadanie.h"

class Zadanie7 : public Zadanie
{
	public:
		Zadanie7();
		virtual ~Zadanie7();
		void run();
	protected:
	private:
        int wspak(char dane[], char wynik[]);
        void pokazTab(char tab[]);
};
#endif // ZADANIE7_H
