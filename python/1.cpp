/*Realizar un codigo que imprima numeros de 1 al 10 
  sin utilizar ciclos*/
#include "bits/stdc++.h"
using namespace std;
void numeros(int n){
    if(n < 10){
        printf("%d ",n);
    }else{
        return;
    }
    numeros(++n);
}

int main(){
    numeros(1);
    return 0;
}