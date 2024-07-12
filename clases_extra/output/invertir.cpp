#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"cantidad de numeros: "; cin>>n;
    int numero;
    int contador = 0,suma = 0;
    do
    {
        cout<<"numero: "; cin>>numero;
        if (numero > 0)
        {
            suma += numero;
            contador++;
            n--;
        }
    } while (n >= 1 && numero >= 1);
    cout<<"El promedio es: "<<suma/contador;
    return 0;
}