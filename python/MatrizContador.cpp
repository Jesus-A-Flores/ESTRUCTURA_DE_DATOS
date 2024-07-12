#include "bits/stdc++.h"
using namespace std;
char mat[5][5] = {{'0','M','0','M','0'},{'0','0','M','0','0'},{'0','0','0','0','0'},{'M','M','0','0','0'},{'0','0','0','M','0'}};
char cont(int i,int j){
    char sum = '0';
    string csum;
    if(mat[i][j+1] == 'M' && j+1 < 5){
        sum++;
    }
    if(mat[i+1][j] == 'M' && i+1 < 5){
        sum++;
    }
    if(mat[i][j-1] == 'M' && j-1 >= 0){
        sum++;
    }
    if(mat[i-1][j] == 'M' && i-1 >= 0){
        sum++;
    }
    if(mat[i+1][j+1] == 'M' && i+1 < 5 && j+1 < 5){
        sum++;
    }
    if(mat[i+1][j-1] == 'M' && i+1 < 5 && j-1 >= 0){
        sum++;
    }
    if(mat[i-1][j+1] == 'M' && i-1 >= 0 && j+1 < 5){
        sum++;
    }
    if(mat[i-1][j-1] == 'M' && i-1 >= 0 && j-1 >= 0){
        sum++;
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