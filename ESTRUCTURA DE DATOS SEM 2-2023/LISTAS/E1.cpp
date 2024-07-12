/*Dado una lista de numeros enteros hallar el menor, el mayor y el promedio de 
  todos los datos*/
#include <iostream>
#include <list>

using namespace std;
list <int> ls;
int main(){
    int n;
    cin>>n;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin>>num;
        ls.push_front(num);
    }

    list<int> :: iterator it;
    ls.sort();
    cout<<"menor: "<<ls.front()<<endl;
    cout<<"mayor: "<<ls.back()<<endl; 
    int suma = 0;
    for ( it = ls.begin(); it != ls.end(); it++)//imprime lista
    {
        suma += *it;
        cout<<suma<<" ";
    }
    cout<<"Promedio: "<<float(suma/n);
    return 0;
}