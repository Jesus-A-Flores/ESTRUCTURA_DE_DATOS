#include <iostream>
#include <time.h>
#include <stack>
#include <queue>

using namespace std;
stack <int> pila;
queue <int> colaPares;
queue <int> colaImpares;
int main(){
    int n;
    int random;
    srand(time(NULL));
    cout<<"ingrese la cantidad de numeros a generar: "; cin>>n;
    for (int i = 0; i < n; i++)
    {
        random = rand()%100+1;
        pila.push(random);
    }
    
    while (!pila.empty())
    {
        if(pila.top()%2 == 0){
            colaPares.push(pila.top());
        }else{
            colaImpares.push(pila.top());
        }
        pila.pop();
    }
    cout<<"Se muestra los pares"<<endl;
    while (!colaPares.empty())
    {
        cout<<colaPares.front()<<endl;
        colaPares.pop();
    }
    cout<<"Se muestra los impares"<<endl;
    while (!colaImpares.empty())
    {
        cout<<colaImpares.front()<<endl;
        colaImpares.pop();
    }
    return 0;
}