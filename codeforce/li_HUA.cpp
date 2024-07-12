#include "bits/stdc++.h"
#define ll long long
using namespace std;
int main(){
    ll t; cin>>t;
    while (t--){
        ll n,m; cin>>n>>m;
        ll x1,x2,y1,y2;
        cin>>x1>>x2>>y1>>y2;
        if(((x1 == 1 && x2 == 1) || (x1 == n && x2 == 1) || (x1 == n && x2 == m)||(x1 == 1 && x2 == m))||
           ((y1 == 1 && y2 == 1) || (y1 == n && y2 == 1) || (y1 == n && y2 == m)||(y1 == 1 && y2 == m))){
            cout<<2<<endl;
        }else{
            if(x1 == 1 || x2 == 1 || x1 == n || x2 == m ||
               y1 == 1 || y2 == 1 || y1 == n || y2 == m ){
                cout<<3<<endl;
            }else{
                cout<<4<<endl;
            }
        }
    }
    
}