#include <iostream>
#include <math.h>
#include <stack>
#include <queue>

using namespace std;
struct point{
    int x;
    int y;
};

float distancia(int x, int y){
    return sqrt(x*x+y*y);
}

stack <point> pila;
queue <point> cola;
int main(){
    point aux;
    int x,y;
    int n;
    cout<<"Cantidad de coordenadas que desea ingresar: "; cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"\tCOORDENDA "<<i+1<<endl;
        cout<<"coordenadas X: "; cin>>x;
        cout<<"coordenadas Y: "; cin>>y;
        aux.x = x;
        aux.y = y;
        pila.push(aux);
        cola.push(aux);
    }
    cout<<"\t==MUESTRA DE LAS DISTANCIAS EN UNA PILA=="<<endl;
    while (!pila.empty())
    {
        cout<<"Distancia:"<<distancia(pila.top().x,pila.top().y)<<endl;
        pila.pop();
    }

    cout<<"\t==MUESTRA DE LAS DISTANCIAS EN UNA COLA=="<<endl;
    while (!cola.empty())
    {
        cout<<"Distancia:"<<distancia(cola.front().x,cola.front().y)<<endl;
        cola.pop();
    }
    
    return 0;
}