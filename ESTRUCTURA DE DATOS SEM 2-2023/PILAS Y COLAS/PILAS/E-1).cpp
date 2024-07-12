/*E-1) dado una cadena de texto con parentesis, determinar si esta correctamente escrito*/

#include <iostream>
#include <stack>

using namespace std;

stack<char>pila;
int main(){
    string s;
    cout<<"Ingrese la cadena: "; cin>>s;
    char c;
    bool estado = true;
    for (int i = 0; i < (int)s.length() && estado; i++)
    {
        c = s.at(i);
        if (c == '(')
        {
            pila.push(c);
        }else{
            if (pila.empty())
            {
                estado = false;
            }else{
                pila.pop();
            }
        }
    }
    if (estado && pila.empty())
    {
        cout<<"SI"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}