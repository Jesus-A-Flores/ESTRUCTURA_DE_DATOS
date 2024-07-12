//  3-2     5-3    7-4
// 3,5,7,9
//n = 5-(5-1)
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int number[100][100];
    int n_number;
    int date,x;
    cout<<"Digite un numero: "; cin>>n_number;
        x = n_number;
    do
    {
        x--;
        date = x*2+1;
    } while (x>1 && date != n_number);

    for (int i = 0; i < n_number; i++)
    {
        for (int j = 0; j < n_number; j++)
        {
            if (i == n_number-1 || j == n_number-1||i == 0 || j == 0)
            {
                number[i][j] = n_number-x;
            }else{
                number[i][j] = (n_number-x)-1;
            }
            
            cout<<number[i][j]<<"\t";
        }
        cout<<endl<<endl;
    }
    
    return 0;
}