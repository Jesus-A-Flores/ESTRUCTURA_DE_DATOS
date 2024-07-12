#include "bits/stdc++.h"
using namespace std;
char mat[5][5] = {{'0','M','0','M','0'},{'0','0','M','0','0'},{'0','0','0','0','0'},{'M','M','0','0','0'},{'0','0','0','M','0'}};
char cont(int i,int j){
    char sum = '0';
    int v[3] = {0,1,-1};
    for(int x:v){
        for(int y:v){
            if(x == 0 && y==0){
                continue;
            }
            if((i+x >= 0 && i+x < 5)&&(j+y >= 0 && j+y < 5) ){
                sum+=(mat[i+x][j+y] == 'M');
            }
        }
    }
    return sum;
}
//char res[5][5];
void mostrar(){
    for(int i = 0;i < 5; i++){
        for(int j = 0;j < 5; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    for (auto i = 0; i < 5; i++){
        for(auto j = 0; j < 5; j++){
            if(mat[i][j] != 'M'){
                mat[i][j] = cont(i,j);
            }
        }
    }
    mostrar();
}