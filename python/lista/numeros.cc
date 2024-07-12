#include "bits/stdc++.h"
using namespace std;
int main(){
    list<int> ls = {4,6,9,7,3,2};
    ls.sort();
    cout<<"Mayor: "<<ls.back()<<endl;
    cout<<"Menor: "<<ls.front()<<endl;
    float suma=0;
    for(auto a:ls){
        suma+=a;
    }
    //cout<<"SUMA: "<<suma;
    cout<<"Promedio: "<<float(suma/ls.size());
}