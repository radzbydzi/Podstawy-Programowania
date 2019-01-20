#include <iostream>
#include <vector>
#include "headers.h"

using namespace std;

int main()
{
    std::setlocale(LC_ALL, "");

    Zadanie1* zad1 = new Zadanie1();
    Zadanie2* zad2 = new Zadanie2();
    Zadanie3* zad3 = new Zadanie3();
    Zadanie4* zad4 = new Zadanie4();
    Zadanie5* zad5 = new Zadanie5();
    Zadanie6* zad6 = new Zadanie6();
    Zadanie7* zad7 = new Zadanie7();
    Zadanie8* zad8 = new Zadanie8();
    Zadanie9* zad9 = new Zadanie9();
    Zadanie10* zad10 = new Zadanie10();
    Zadanie11* zad11 = new Zadanie11();
    Zadanie12* zad12 = new Zadanie12();
    Zadanie13* zad13 = new Zadanie13();
    Zadanie14* zad14 = new Zadanie14();
    Zadanie15* zad15 = new Zadanie15();
    Zadanie16* zad16 = new Zadanie16();
    Zadanie17* zad17 = new Zadanie17();
    Zadanie18* zad18 = new Zadanie18();
    Zadanie19* zad19 = new Zadanie19();
    Zadanie20* zad20 = new Zadanie20();

    zad1->setTresc("Napisz program, który losuje liczbę, a następnie prosi o podanie liczby, podanie parametru ‘epsilon’, a następnie wypisuje na ekran ‘liczba za mała’ lub ‘liczba za duża’ lub ‘trafiłeś, to jest ta liczba w granicach błędu’, jeśli wartość bezwzględna różnicy liczby wylosowanej i podanej jest mniejsza od ‘epsilon’.");
    zad2->setTresc("Napisz program, który prosi o podanie znaku a następnie sprawdza, czy wprowadzono małą literę alfabetu, dużą literę alfabetu, czy liczbę; wyświetla stosowny komunikat: „mała litera”, „duża litera”, „liczba”, „żadna z nich”.");
    zad3->setTresc("Napisz program, który prosi o podanie tablicy znakowej o maksymalnie 20 znakach + znak ‘\0’, a następnie wyświetla długość wprowadzonego ciągu.");
    zad4->setTresc("Napisz program, który dla trzech wprowadzonych parametrów double a, b, c sprawdza możliwość rozwiązania równania ax^2+bx+c=0.");
    zad5->setTresc("Napisz funkcję int wspak(char s[]), która jako parametr przyjmuje tablicę znakową chars[] i odwraca kolejność znaków w niej, przetestuj w programie.");
    zad6->setTresc("Napisz funkcję int wspak(char dane[], char wynik[]), która pobiera tablice danych i kopiuje je do tablicy char wynik[]. Sprawdź w programie. ");
    zad7->setTresc("Napisz funkcję int wspak(char dane[], char wynik[]), która pobiera tablice danych i kopiuje je do tablicy char wynik[] w odwrotnej kolejności. Sprawdź w programie.");
    zad8->setTresc("Napisz funkcję, która oblicza sumę kolejnych liczb całkowitych z przedziału [0,n] w wersji z pętlą i w wersji rekurencyjnej oraz w wersji z wzorem na sumę ciągu arytmetycznego. Sprawdź w programie.");
    zad9->setTresc("Napisz program, który pobiera liczby:\nfloat kapital, \nfloat procent\n oraz liczbę lat\nint lata,\na następnie wyświetla w pętli zysk po zadanych latach. Naciśnięcie klawisza (np. enter bez wartości) kończy program.");
    zad10->setTresc("Cena maleje wg funkcji cena_pocz*(e^(-x*miesiące)), gdzie ‘x’ jest ‘zadaną wartością ‘spadku ceny’, małą liczbą. Napisz program, który obliczy po ilu miesiącach cena spadnie o zadaną wartość lub po ilu miesiącach osiągnie zadaną wartość, ‘cena’, ‘x’ i ‘miesiące’ wprowadzane z konsoli. Użyj funkcji z ‘math.h’, ‘cmath’. Program pytado wyboru: jaka cena?-nieznana liczba miesięcy albo ile miesięcy?, -podaje cenę końcową.");
    zad11->setTresc("Napisz funkcję, która przyjmuje argument typu int, a następnie zwraca liczbę bitów, które są w nim włączone. Przetestuj funkcję w programie.");
    zad12->setTresc("Napisz funkcję, która przyjmuje dwa argumenty typu int: wartość liczby (wprowadzonej z konsoli) oraz numer bitu(wprowadzony z konsoli, od 0 do 7). Funkcja powinna zwracać wartość bitu o wskazanym numerze. Przetestuj funkcję w programie.");
    zad13->setTresc("Napisz funkcję, która „obraca” bity w wartości typu unsigned int o określonąliczbę miejsc w lewo. Na przykład wywołanie obroc_l(x,4)przesunęłoby bity w wartości x o cztery miejsca w lewo, a bity, które znalazły się poza lewą krawędzią, pojawiłyby się ponownie z prawej strony. Innymi słowy, bit wypchnięty z najbardziej znaczącego miejsca zostaje umieszczony w miejscu najmniej znaczącym. Przetestuj funkcję w programie.");
    zad14->setTresc("Metoda std::string::compare(const string &str)(wywołanie string1.compare(string2)zwraca liczbę całkowitą większą od 0, gdy string1 jest „większy” od string2:(string1.compare(string2)>0) == trueNapisz program, który:\n\t-pobierze za pomocą funkcji getline() 5 wierszy i przypisze kolejnym elementom tablicy typu string,\n\t-za pomocą sortowania bąbelkowego uporządkuje wiersze i wyświetli na ekranie,\n\t-prawidłowo wyświetli polskie znaki.");
    zad15->setTresc("To samo, jak wyżej, za pomocą funkcji strcmp(const char * string1, const char * string1). Uwaga: wprowadzane wiersze muszą być w tablicy const char wiersze[liczba wierszy][liczba kolumn]. ");
    zad16->setTresc("Napisz program, który:\n\ta.Pobiera bajt z konsoli w postaci liczby,\n\tb.Pobiera z konsoli numer bitu (od 0 do 7),\n\tc.W pętli losuje bajty i wyświetla je,\n\td.Porównuje zadany bit wylosowanegobajtu z bitem zadanego bajtu, jeśli jest sukces, wyświetla komunikat,\n\te. Powtarza to 10 razy i wyświetla średnią ilość losowań na sukces.");
    zad17->setTresc("Napisz program, który:/n/ta.otwiera zadany plik tekstowy,/n/tb.wyświetla jego zawartość,/n/tc.prosi o podanie linii tekstu,/n/td.dopisuje wprowadzony tekst do pliku,/n/te.program kończy działanie po wpisaniu pustego wiersza.");
    zad18->setTresc("Napisz program, który:/n/ta.otwiera zadany plik tekstowy z zapisanymi polami struktury prostej bazy, np.‘Imię’, ‘Nazwisko’,‘Wiek’,/n/tb.wypisuje  zawartość pliku w kolumnach,/n/tc.prosi o wprowadzenie nowego rekordu (danychdo struktury) i dopisuje do pliku./nProgram kończy wprowadzenie [enter] na początku wiersza.");
    zad19->setTresc("Napisz program, który definiuje klasę z 3 polami danych publicznych, 3 funkcjam i publicznymi, 3 polami danych prywatnych i 3 funkcjami prywatnymi. Program demonstruje działanie funkcji prywatnych (wywołana funkcja prywatna podczas wykonania wyświetla na ekranie stosowny komunikat).");
    zad20->setTresc("Napisz program, który definiuje klasę wektorna płaszczyźnie z 3 wersjami konstruktora: pusty wektor, wektor zadany, konstruktor kopiujący;\n4 polami prywatnymi x, y, długość, kąt nachylenia do osi x;/nfunkcjami prywatnymi; oblicz_dlugosc(), oblicz_kat(), pobierz_x(), pobierz_y(), pobierz_dlug(), pobierz_kat();/nfunkcjami publicznymi: wyswietl_x(), wyswietl_y(), wyswietl_dlug(), wyswietl_kat();");

    vector<Zadanie*> zad;

    zad.push_back(zad1);
    zad.push_back(zad2);
    zad.push_back(zad3);
    zad.push_back(zad4);
    zad.push_back(zad5);
    zad.push_back(zad6);
    zad.push_back(zad7);
    zad.push_back(zad8);
    zad.push_back(zad9);
    zad.push_back(zad10);
    zad.push_back(zad11);
    zad.push_back(zad12);
    zad.push_back(zad13);
    zad.push_back(zad14);
    zad.push_back(zad15);
    zad.push_back(zad16);
    zad.push_back(zad17);
    zad.push_back(zad18);
    zad.push_back(zad19);
    zad.push_back(zad20);


    int nr_zad;
    do{
        cout<<"Wprowadz nr zadania"<<endl;
        cin>>nr_zad;
        if(nr_zad<=20 && nr_zad>=0)
        {
            zad[nr_zad-1]->run();
            cout<<endl<<"<KONIEC ZADANIA>"<<endl<<endl<<endl;
        }
        else
        {
            cout<<endl<<"<KONIEC PROGRAMU>"<<endl<<endl<<endl;
        }

    }while(nr_zad>=0 && nr_zad<=20);

    return 0;
}
