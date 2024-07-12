#include <iostream>
#include <stdio.h>
#define H(x) for(int i=0;i<(x);i++)
#define a(y) (y%2 == 0)? y:0
using namespace std;
int main(){
    int n;
    cin>>n;
    H(n){
        printf("%d ",a(i));
    }
}