#include "Zadanie4.h"
#include <math.h>
#include <ctime>
#include <cstdlib>

Zadanie4::Zadanie4()
{
    //ctor
}

Zadanie4::~Zadanie4()
{
    //dtor
}

void Zadanie4::fkwadr(double a, double b, double c)
{
    //delta = b^2 + 4ac
    double delta = b*b - 4*a*c;
    cout<<"Równanie "<<a<<"*x^2"<<" + "<<b<<"*x "<<"+ "<<c<<endl;
    cout<<"Delta "<<delta<<endl;
    if(delta>0)
    {
        double pDel = sqrt(delta);
        double x1=(-b+pDel)/2*a;
        double x2=(-b-pDel)/2*a;
        cout<<"x1="<<x1<<" i x2="<<x2<<endl;
    }else if(delta==0)
    {
        double x=(-b)/2*a;
        cout<<"x="<<x<<endl;
    }else
    {
        cout<<"Delta jest ujemna. Równanie nie ma rozwi¹zañ w dziedzinie rzeczywistej"<<endl;
    }
}

void Zadanie4::run()
{
    cout<<"Zadanie4"<<endl<<endl;
    pokazTresc();
    double a,b,c;
    cout<<"Wprwoad a"<<endl;
    cin>>a;
    cout<<"Wprwoad b"<<endl;
    cin>>b;
    cout<<"Wprwoad c"<<endl;
    cin>>c;
    fkwadr(a,b,c);
    cout<<"-----------"<<endl<<endl;
}
