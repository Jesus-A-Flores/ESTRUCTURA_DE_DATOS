#include<bits/stdc++.h>
using namespace std;
void solve(int n){
    map<int,map<int,int>> mp;
    int num;
    int j = 1;
    vector<int>sol(n);
    for(int i = 0; i < n; i++){
        cin>>num;
        if(mp.empty()){
            mp[num][j] = num;
            sol[i] = j;
            mp[num][j]--;
            j++;
        }else{
            auto it = mp.find(num);
            if(it != mp.end()){
                for(auto it2 : it->second){
                    if(it2.second>0){
                        sol[i] = it2.first;
                        mp[num][it2.first]--;
                    }else{
                        mp.erase(num);
                        mp[num][j]=num;
                        sol[i] = j;
                        mp[num][j]--;
                        j++;
                    }
                }
            }else{
                mp[num][j]=num;
                sol[i] = j;
                mp[num][j]--;
                j++;
            }
        }
    }
    for(auto it: mp){
        for(auto it2:it.second){
            if(it2.second!=0){
                cout<<-1;
                return;
            }
        }
    }
    for(auto a : sol){
        cout<<a<<" ";
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        solve(n);
        cout<<endl;
    }
}