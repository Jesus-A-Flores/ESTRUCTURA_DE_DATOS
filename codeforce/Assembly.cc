#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll t,n; cin>>t;
    while (t-- && cin>>n){
        vector<int>vec(n-1),a;
        for(int i = 0; i < n-1; i++){
            cin>>vec[i];
        }
        int j = 0;
        a.push_back( 1 + vec[0]);
        int d = 1+vec[0];
        int k = d;
        while (a.size() != n && j < n){
            int i = 0;
            while (true){
                if(i>=k-1){
                    if(i%d == vec[j]){
                        a.push_back(i);
                        break;
                    }
                }
                i++;
            }
            j++;
        }
        
        for(auto x: a){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}