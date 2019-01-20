#ifndef ZADANIE9_H
#define ZADANIE9_H
#include "Zadanie.h"

class Zadanie9 : public Zadanie
{
	public:
		Zadanie9();
		virtual ~Zadanie9();
		void run();
	protected:
	private:
        void zyskPo(float kapital, float procent, int lata);
};
#endif // ZADANIE9_H
