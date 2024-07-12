/*encuentra numeros amigos en un determinado rango*/
#include <iostream>

using namespace std;

int verificacion(int n){
    int suma=0;
    for (int i = 1; i < n; i++) {
            if (n%i == 0) {
                suma += i;
            }
        }
    return suma;
}
int main(){
    int num1=0;
    int num2=0;
    int inicio=1000;
    int final=1500;
    int i = inicio;
    do
    {
        num1=verificacion(i);
        for (int j = inicio; j < final; j++)
        {
            if (num1 == j && verificacion(j) == i )
            {
                num2 = i;
            }
        }
        
        i++;
    } while (i<=final && num2 == 0);
    cout<<"Los numeros amigos son: ";
    cout<<"\n1.-"<<num1<<"\n2.-"<<num2;
    return 0;
}