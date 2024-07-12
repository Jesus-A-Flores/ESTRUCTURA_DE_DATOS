#include <iostream>
#include <conio.h>
#include <stack> //libreria necesaria para pilas
#include <queue> //libreria necesaria para colas
#include <string.h>
#include <math.h>

using namespace std;

queue <char> postfija;

int prio(char car){
    switch (car)
    {
    case '+':
    case '-': return 1;
    case '/':
    case '*': return 2;
    case '^': return 3;

    default:
        return 0;
    }

}

void postfija_infija(char q[]){
    stack <char> pila;
    int pos = 0;
    char car;
    while (pos < strlen(q))
    {
        printf("%3c",q[pos]);
        switch (q[pos])
        {
        case '(':
                pila.push(q[pos]);
            break;
        case '+':
        case '-':
        case '*':
        case '/':
        case '^': //codigo de operador
                while (prio(pila.top())>= prio(q[pos]))
                {
                    car = pila.top();
                    pila.pop();
                    postfija.push(car);
                }
                pila.push(q[pos]);

            break;
        case ')': //codigo
                while (pila.top() != '(')
                {
                    car = pila.top();
                    pila.pop();
                    postfija.push(car);
                }

            break;
        default: //operando
                postfija.push(q[pos]);
        }
        pos++;
    }
}
//evaluar postfija
float evaluar_postfija(void){
    cout<<"\n\tPOSTFIJA\n";
    stack < int > pila;
    char car;
    float res;
    while (!postfija.empty())
    {
        printf("%2c",postfija.front());
        car = postfija.front();
        postfija.pop();
        switch (car)
        {
        case '+':
        case '-':
        case '*':
        case '/':
        case '^': printf(" Operador\n");
                float op1,op2,r;
                op2 = pila.top();
                pila.pop();
                op1 = pila.top();
                pila.pop();
                switch (car)
                {
                case '+': r = op1 + op2; break;
                case '-': r = op1 - op2; break;
                case '*': r = op1 * op2; break;
                case '/': r = op1 / op2; break;
                case '^': r = pow(op1,op2); break;
                }
                pila.push(r);
                break;
         default: printf(" Operando\n");
            char cad[2] = " "; 
            cad[0] = car;
            pila.push(atoi(cad));
            break;
        }
    }
    res = pila.top();
    pila.pop();
    return res;
}
int main(){
    postfija_infija("(2+2");
    evaluar_postfija();
    getch();
    return 0;
}