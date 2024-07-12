#include "bits/stdc++.h"
#define v "map"
#define v2 "pie"
#define v3 "mapie"
using namespace std ;
int main(){
    int t; cin>>t;
    while(t--){
        int cont = 0;
        int n; cin>>n;
        string s;
        cin>>s;
        int pos = 0;
        while(pos < (int)s.size()-2){
            string pr = s.substr(pos,3);
            string pr2 = s.substr(pos,5);
            if(pr2 == v3){
                cont++;
                pos+=5;
                continue;
            }
            if(pr == v || pr == v2){
                cont++;
                pos+=3;
                continue;
            }
            pos++;
        }
        cout<<cont<<endl;
    }
}