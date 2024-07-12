#include<bits/stdc++.h>
using namespace std;
int main(){
    string cadena; getline(cin,cadena);
    string cad_buscar; getline(cin,cad_buscar);
    vector<string> vec;
    vector<string>::iterator it;
    size_t pos=0; 
    while((pos = cadena.find(',')) != string::npos){
        vec.push_back(cadena.substr(0,pos));
        cadena.erase(0,pos+1);
    }
    vec.push_back(cadena);
    it = find(vec.begin(),vec.end(),cad_buscar);
    cout<<(distance(vec.begin(),it)+1)*5<<endl;
}