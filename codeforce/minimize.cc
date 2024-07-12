#include "bits/stdc++.h"
#define ll long long
using namespace std;
// 1 1 1 1 0 0
// 0 0 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin>>t;
    while (t--){
        string s; cin>>s;
        int contu = 0;
        int contc = 0;
        string s1;
        for(int i = 0; i < s.size(); i++){
            contc+=(s[i] == '0');
            contu+=(s[i] == '1');
        }
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1'){
                contc--;
            }
            if(s[i] == '0'){
                contu--;
            }
        }
        
    }
    
}