#include <iostream>
#include <stack>

using namespace std;

stack <int> pila;//inicio de pila como variable global

int main(){
    int n;
    int nv[1000];
    cout<<"Cantidad? "; cin>>n;
    cout<<" ==vagones== "<<endl;
    bool band = false;
    //----------------------------------------------
    if (n == 0)
    {
        cout<<endl;
    }else{
        for (int i = 0; i < n; i++)
        {
            cin>>nv[i];
            pila.push(nv[i]);
        }
        //------------------------------------------
        int i = 1;
        while (!pila.empty())
        {
            if(pila.top() == n){
                band = true;
            }else{
                band = false;
            }
            if(pila.top() == i){
                band = true;
                i++;
            }else{
                band = false;
            }
            n--;
            pila.pop();
        }
        //------------------------------------------
        band?  cout<<"YES" : cout<<"NO";
    }
    
    return 0;
}