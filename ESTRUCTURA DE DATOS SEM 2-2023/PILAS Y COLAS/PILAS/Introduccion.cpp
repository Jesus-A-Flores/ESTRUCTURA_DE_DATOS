#include <iostream>
#include <stack>
using namespace std;

stack<int>pila;
int main(){
    pila.push(5); //agrega elementos a la pila
    pila.push(6);
    //insersion de datos
    int n;
    char op='N';
    do
    {
        cout<<"Ingrese el elemento: "; cin>>n;
        pila.push(n);
        cout<<"Seguir agregando? S/N: "; cin>>op;
    } while (toupper(op) == 'S' );
    
    cout<<"tamanio de la pila: "<<pila.size()<<endl; //muestra el tamaño de la pila 
    cout<<"pila vacia?: "<<pila.empty()<<endl;
    cout<<"\t==SE MUESTRA LA PILA=="<<endl;
    while (!pila.empty())
    {
        cout<<pila.top()<<" "; //saca el tope de la pila
        pila.pop(); //elimina el elemento tope de la pila
    }
    
    return 0;
}