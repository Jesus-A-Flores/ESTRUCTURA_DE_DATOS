#include <bits/stdc++.h>
#define ll long long
#define v(a) for(int i = 0; i < a; i++)

using namespace std;

int main() {
    //inicializacion de vector 
    vector<vector<int>>vec(2,vector<int>(2));
    ll num = 1;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            vec[i][j] = num;
            num++;
        }
    }
    
    for(auto x: vec){
        for(auto y : x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    
    system("Pause");
    return 0;
}