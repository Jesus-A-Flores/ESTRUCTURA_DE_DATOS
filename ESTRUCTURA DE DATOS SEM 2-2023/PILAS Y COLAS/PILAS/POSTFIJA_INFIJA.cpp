#include <iostream>
#include <stack>
#include <queue>
using namespace std;
stack <char> pila;
queue <char> cola;
bool esOperador(char c){ //Verifica si es operador y retorna un valor de tipo bool
    if (c == '+' ||c == '-'||c == '*'||c == '/'||c == '^')
    {
        return true;
    }
    return false;
}

int precedencia(char c){ //retorna la prioridad de los operadores
    if (c == '+' || c == '-'){
        return 1;
    }else{
        if (c == '*' || c == '/'){
            return 2;
        }else{
            if(c == '^'){
                return 3;
            }else{
                return 0;
            }
        } 
    }
}
void postfija(string cadena){
    char c;
    for (int i = 0; i < (int)cadena.length(); i++){
        c = cadena.at(i);
        if(!esOperador(c) && c!='(' && c!=')'){ 
            cola.push(c);
        }else{
            if (c == ')'){
                while (!pila.empty() && pila.top() != '(')
                {
                    cola.push(pila.top());
                    pila.pop();
                }
                if (pila.top() == '('){
                    pila.pop();
                } 
            }else{
                if(pila.empty() || c == '('){
                    pila.push(c);
                }else{
                    if(precedencia(c) <= precedencia(pila.top())){ //evalua las precedencias de las operaciones
                        //mientras la precedencia sea menor 
                        while (!pila.empty() && precedencia(c) <= precedencia(pila.top())){ 
                            cola.push(pila.top());
                            pila.pop();
                        }
                        pila.push(c); 
                    }else{
                        pila.push(c);
                    }
                }
            } 
        }
    }
    if (!pila.empty()){ //envia lo restante de la pila a la cola
        while (!pila.empty())
        {
            cola.push(pila.top());
            pila.pop();
        } 
    }   
}
int main(){
    string cadena;
    cin>>cadena;
    postfija(cadena); //llama a la duncion de tipo void
    printf("\t==POSTFIJA==\n");
    while (!cola.empty())//imprime la evaluación postfija
    {
        //printf("%4c",cola.front());
        cout<<cola.front()<<"\t";
        cola.pop();
    }
    return 0;
}