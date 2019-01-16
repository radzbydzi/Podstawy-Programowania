#include <iostream>
#include "headers.h"

using namespace std;

int main()
{
    std::setlocale(LC_ALL, "");

    Zadanie1* zad1 = new Zadanie1();
    Zadanie2* zad2 = new Zadanie2();
    Zadanie3* zad3 = new Zadanie3();
    Zadanie4* zad4 = new Zadanie4();

    zad1->run();
    zad2->run();
    zad3->run();
    zad4->run();
    return 0;
}
