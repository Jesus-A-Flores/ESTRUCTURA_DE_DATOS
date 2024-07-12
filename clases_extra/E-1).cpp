#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

void adivinaElNumero(void){
    srand(time(NULL));
    int n;
    int intentos = 10;
    int objetivo = 1+rand()%100;
    int contador = 0;
    for (int i = 0; i < intentos; i++)
    {
        contador++;
        cout<<"Tu numero: "; cin>>n;
        if(n == objetivo){
            cout<<"FELICITACIONES!! "<<endl;
            cout<<"lo lograste con "<<contador<<" intentos";
            break;
        }else{
            if (n>objetivo)
            {
                cout<<"es menor "<<endl;
            }else{
                cout<<"es mayor "<<endl;
            }
        }
        if (i == intentos-1)
        {
            int op;
            cout<<"Ya no te quedan mas intentos"<<endl;
            cout<<"Quieres volberlo a intentar?"<<endl;
            cout<<"1.[si]\n2.[no]"<<endl;
            cout<<"Rpta: "; cin>>op;
            switch (op)
            {
            case 1:
                adivinaElNumero();
                break;
            
            case 2:
                break;
            }
        }
        
    }
}
int main(){
    //adivina el numero
    adivinaElNumero();
    
    return 0;
}