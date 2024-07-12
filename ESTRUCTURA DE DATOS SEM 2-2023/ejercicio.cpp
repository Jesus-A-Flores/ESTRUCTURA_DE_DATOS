#include <iostream>
#include <stack>
using namespace std;
stack<char>pila;
int main(){
    string s;
    bool band = true;
    
    int contador = 0;
    int n;
    cin>>n;
    do
    {
        cout<<"cadena? "; cin>>s;
        for (int i = 0; i < (int)s.length() && band; i++)
        {
            if (s.at(i) == '<')
            {
                pila.push(s.at(i));
                
            }else{
                if (s.at(i)=='>' && !pila.empty())
                {
                    pila.pop();
                    contador++;
                }
            }
        }
        cout<<contador<<endl;
        n--;
    } while (n>0);
    return 0;
}