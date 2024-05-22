//contar la cantidad de grupos que existe en una matriz
#include "bits/stdc++.h"
using namespace std;
int vis[100][100];
void mostrar_vis(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<vis[i][j]<<" ";
        }
        cout<<endl;
    }
}
//funcion DFS
int mat[100][100];
int cont = 0;
void dfs(int i,int j,int n,int v){
    if(i<0 || i>n || j < 0 || j > n){
        return;
    }
    if(vis[i][j]==1){
        return;
    }
    if(mat[i][j] != v){
        return;
    }
    vis[i][j] = 1;
    mostrar_vis(n);
    int paso[] = {0,1,-1};
    for(int x =0; x < 3; x++){
        for(int y = 0;y < 3; y++){
            dfs(i+paso[x],j+paso[y],n,v);
        }
    }
    
}
int main(){
    int n;
    cin>>n;
    
    memset(vis,0,sizeof(vis));
    for(int i = 0;i < n; i++){
        for(int j = 0;j < n; j++){
            cin>>mat[i][j];
        }
    }
    //recorrido
    for(int i = 0;i < n; i++){
        for(int j = 0;j < n; j++){
            int val=mat[i][j];
            if(vis[i][j] != 1){
                cout<<"Grupos de: "<< val << endl;
                dfs(i,j,n,val);
                cout<<"Fin de Grupos de: "<< val << endl;
                cont++;
            }
        }
    }
    cout<<"Existen "<<cont<<" grupos"<<endl;
}