#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"Digite el tamanio: "; cin>>n;
    int M[n][n];
    int num = n*n;
    int fila = n-1,columna = 0,bottom = n-1,right = n-1;
    //
    while (num >= 1)
    {
        for (int j = fila; j >=0; --j)
        {
            M[columna][j] = num;
            num--;
        }
        for (int i = columna; i < fila ; i++)
        {
            M[i+1][bottom-2] = num;
            num--;
        }
        for (int i = bottom-1; i <= fila ; i++)
        {
            M[right][i] = num;
            num--;
        }
        for (int i = right; i >= bottom-1; --i)
        {
            M[right-1][i] = num;
            num--;
        }
        bottom--;
        right--;
        columna++;
        fila++;
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<M[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}