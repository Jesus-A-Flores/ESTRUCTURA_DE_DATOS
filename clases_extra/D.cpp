#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> &v, int n){
    int res[n];
    memset(res,0,n*sizeof(int));
    int num=1;
    for(int i=0; i<n; i++){
        int cont = v[i];
        int j=0;
        bool band=false;
        while(cont>0 && j<n){
            if(res[j] == 0 && v[i]==v[j]){
                res[j] = num;
                cont--;
                band=true;  
            }
            j++;
        }
        if(band){
            num++;
        }
    }
    for(int i=0; i<n; i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v;
        int num,suma=0; 
        set<int>st;   
        while(n-- && cin>>num){   
            v.push_back(num);
            if(find(st.begin(),st.end(),num) == st.end()){
                st.insert(num);
                suma+=num;
            }
        }
        if(suma<=int(v.size())){
            solve(v,v.size());
        }else{
            cout<<-1<<endl;
        }
    }
}