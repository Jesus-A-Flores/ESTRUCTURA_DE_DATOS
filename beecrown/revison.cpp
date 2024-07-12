#include "bits/stdc++.h"
using namespace std;
int main(){
    string a,b;
    while(cin>>a>>b && a[0]-'0'!=0 && b[0]-'0'!=0){
        string res = "";
        for(auto c:b){
            if(c==a[0]){
                continue;
            }else{
                res+=c;
            }
        }
        size_t startpos = res.find_first_not_of("0"); //el primer elemento que no sea zero
        if (string::npos != startpos) {
            cout << res.substr(startpos)<<endl;//muestra el texto desde la posicion que se le indica
        }else{
            cout<<'0'<<endl;
        }
    }
}