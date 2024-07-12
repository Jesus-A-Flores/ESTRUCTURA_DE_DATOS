#include <iostream>
#include <list>

using namespace std;
list <int> ls;
list <int> ls2;
int main(){
    cout<<"emty(): "<<ls.empty()<<endl;
    cout<<"size(): "<<ls.size()<<endl;
    ls.push_front(1);
    cout<<"emty(): "<<ls.empty()<<endl;
    cout<<"size(): "<<ls.size()<<endl;
    ls.push_back(5);
    cout<<"emty(): "<<ls.empty()<<endl; //lista vacia
    cout<<"size(): "<<ls.size()<<endl; //tanaño de lista
    ls.push_back(6); //inserta al frente 
    ls.push_back(8); //inserta al ultimo
    ls.push_front(3);
    ls.push_front(10);
    cout<<"========================================================="<<endl;
    list<int> :: iterator it; //implementando iterador para el recorrido de las listas
    for ( it = ls.begin(); it != ls.end(); it++)//imprime lista
    {
        cout<<*it<<" -> ";
    }
    cout<<"size(): "<<ls.size()<<endl;
    cout<<"========================================================="<<endl;
    list<int> :: reverse_iterator rit;
    for ( rit = ls.rbegin(); rit != ls.rend(); rit++)//imprime lista en reversa
    {
        cout<<*rit<<" -> ";
    }
    cout<<"size(): "<<ls.size()<<endl;
    cout<<"========================================================="<<endl;
    it = ls.begin();
    ++it;
    ls.insert(it,20); //inserta el valor en una distinguida posicion
    ls.insert(it,20);
    ls.insert(it,20);
    ls.insert(it,20);
    ls.insert(it,20);
    
    for ( it = ls.begin(); it != ls.end(); it++)//imprime lista
    {
        cout<<*it<<" -> ";
    }
    cout<<"size(): "<<ls.size()<<endl;
    cout<<"========================================================="<<endl;
    ls.unique();//elimina valores continuos iguales
    for ( it = ls.begin(); it != ls.end(); it++)//imprime lista
    {
        cout<<*it<<" -> ";
    }
    cout<<"size(): "<<ls.size()<<endl;
    cout<<"========================================================="<<endl;
    ls.sort();//ordena la lista
    for ( it = ls.begin(); it != ls.end(); it++)//imprime lista
    {
        cout<<*it<<" -> ";
    }
    cout<<"size(): "<<ls.size()<<endl;
    cout<<"========================================================="<<endl;
    cout<<ls.front()<<endl; //imprime el primer elemento de la lista
    cout<<ls.back()<<endl; //imprime el ultimo elemento de la lista
    ls.pop_front(); //elimina el primer elemento 
    ls.pop_back(); //elimina el ultimo elemento
    for ( it = ls.begin(); it != ls.end(); it++)//imprime lista
    {
        cout<<*it<<" -> ";
    }
    cout<<"size(): "<<ls.size()<<endl;
    cout<<"========================================================="<<endl;
    ls2.assign(ls.begin(),ls.end()); // copea la lista a la lista 2
    while (!ls.empty())
    {
        cout<<ls.front()<<"->";
        ls.pop_front(); //elimina los valores de la lista
    }
    cout<<"size(): "<<ls.size()<<endl;
    cout<<"================MUESTRA LA LISTA 2======================="<<endl;
    for ( it = ls2.begin(); it != ls2.end(); it++)//imprime lista
    {
        cout<<*it<<" -> ";
    }
    cout<<"size(): "<<ls2.size()<<endl;
    return 0;
}