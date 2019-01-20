#ifndef ZADANIE8_H
#define ZADANIE8_H
#include "Zadanie.h"

class Zadanie8 : public Zadanie
{
	public:
		Zadanie8();
		virtual ~Zadanie8();
		void run();
	protected:
	private:
        int sumaPetla(int n);
        int sumaReku(int n);
        int sumaWzor(int n);
};
#endif // ZADANIE8_H
