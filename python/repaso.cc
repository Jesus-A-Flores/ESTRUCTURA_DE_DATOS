#include <iostream>
#include <conio.h>
#include <vector>
#include <algorithm>//libreria especial para transform
using namespace std;

int main(){
    string name;
    vector<int> vec = {1,2,3,4};
    vector<int> par;
    getline(cin,name);
    transform(name.begin(),name.end(),name.begin(),::toupper);
    transform(vec.begin(),vec.end(),vec.begin(),[](int i){
        return (i%2 == 0);
    });
    cout<<name<<endl;
    for (int i : par){
        cout<<i<<" ";
    }
    
    getch();
}