#include "bits/stdc++.h"
using namespace std;

int vis[100][100];

int tam;
char grafo[50][50];
void mostrar_visitado(){
    for(int i = 0; i <  tam; i++ ){
        for(int j = 0; j < tam; j++){
            cout<<vis[i][j]<<" ";
        }
        cout<<endl;
    }
}
void dfs(int x, int y){
    if(x<0 || x>tam || y<0 || y>tam){
        return;
    }
    if(vis[x][y]==1){
        return;
    }
    if(grafo[x][y] == '#'){
        return;
    }
    vis[x][y] = 1;
    mostrar_visitado();
    int dx[] = {0,1,0,-1};
    int dy[] = {-1,0,1,0};
    for(int i = 0;i < 4; i++){
        dfs(x+dx[i],y+dy[i]);
    }
}
int main(){
    memset(vis,0,sizeof(vis));
    //datos al grafo
    cin>>tam;
    //mostrar_visitado();
    for(int i = 0; i <  tam; i++ ){
        for(int j = 0; j < tam; j++){
            cin>>grafo[i][j];
        }
    }
    for(int i = 0; i <  tam; i++ ){
        for(int j = 0; j < tam; j++){
            if(vis[i][j]==0){
                dfs(i,j);
            }
        }
    }
    mostrar_visitado();
}