#include <iostream>
#include <stack>
#include <queue>
using namespace std;
stack <string> pila1;
stack <string> pila2;

int main(){
    string datos;
    int op;
    while(op!=5){
        cout<<"1. Deshacer\n2.Agregar\n3.Recuperar\n4.Mostrar\n5.Salir\n->"; cin>>op;
        switch (op)
        {
        case 1:
            pila2.push(pila1.top());
            pila1.pop();
            break;
        case 2:
            cout<<"Ingrese la cadena: "; cin>>datos;
            pila1.push(datos);
            
            break;
        case 3:
            pila1.push(pila2.top());
            pila2.pop();
            break;
        case 4:
            cout<<pila1.top()<<endl;
        default:
            break;
        }
    }
    return 0;
}