#include <iostream>
#include <stack>

using namespace std;
stack <char> pila;
int main(){
    string palabra;
    cout<<"Ingrese la palabra: "; cin>>palabra;
    for (int i = 0; i < (int)palabra.length(); i++)
    {
        pila.push(palabra.at(i));
    }
    
    while (!pila.empty())
    {
        
        cout<<pila.top();
        pila.pop();
    }
    
    return 0;
}