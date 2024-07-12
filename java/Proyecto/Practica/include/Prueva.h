#ifndef PRUEVA_H
#define PRUEVA_H
#include <iostream>

using namespace std;

class Prueva
{
    public:
        int n;
        int m;
        int mult;
    void multiplicacion(){
        cout<<"Ingrese un numero: "; cin>>n;
        cout<<"Ingrese otro numero: "; cin>>m;
        mult = n*m;
        cout<<"La multiplicacion es: "<<mult;
    }
};

#endif // PRUEVA_H
