#include<bits/stdc++.h>
using namespace std;
int contp(string s,char c){
    int cont = 0;
    for(char d:s){
        if(d == c){
            cont++;
        }
    }
    return cont;
}
int main(){
    int n; cin>>n;
    string s; cin>>s;
    string s1,s2;
    s2 = s;
    for(int i=0; i<n;i++){
        s1+=s[i];
        s2.erase(0,1);
        if(contp(s1,'L') == contp(s2,'L') || contp(s1,'O') == contp(s2,'O')){
            if(i == n-1){
                cout<<-1<<endl;
            }
        }else{
            if(i == n-1){
                cout<<-1<<endl;
            }else{
                cout<<i+1<<endl;
                break;
            }
        }
    }
}