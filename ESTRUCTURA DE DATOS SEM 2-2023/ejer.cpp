#include <iostream>
#include <stack>
using namespace std;
stack<char>pila;
int main(){
    string s;
    int n;
    cin>>n;
    do
    {
        cout<<"cadena? "; cin>>s;
        for (int i = 0; i < (int)s.length(); i++)
        {
            if (s.at(i) == '(')
            {
                pila.push(s.at(i));
                
            }else{
                if (s.at(i)==')' || !pila.empty())
                {
                    pila.pop();
                }
            }
        }
        if (pila.empty())
        {
            cout<<"correcto"<<endl;
        }else{
            cout<<"incorrecto"<<endl;
        }
        n--;
    } while (n>0);
    return 0;
}