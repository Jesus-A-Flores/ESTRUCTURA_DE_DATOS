#include <bits/stdc++.h>
using namespace std;
void base_n_A_10(){
    cout<<"base x a base 10"<<endl;
    int j;
    cout<<"Ingrese la base: ";cin>>j;
    string number_base;
    cout<<"Ingrese el numero en base "<<j<<": "; cin>>number_base;
    map<char,int>base = {{'0',0},{'1',1},{'2',2},{'3',3},{'4',4},{'5',5},
                         {'6',6},{'7',7},{'8',8},{'9',9},
                         {'A',10},{'B',11},{'C',12},{'D',13},{'E',14},{'F',15}};
    int res_base_dec=0;
    for(int i = number_base.size()-1,x=0;i>=0; i--,x++){
        res_base_dec+=base[number_base[i]]*pow(j,x);
    }
    cout<<"Su resultado en base 10 es: "<<res_base_dec<<endl;
}
void base_10_A_n(){
    int base;
    cout<<"base a transformar: ";cin>>base;
    map<int,char>basem = {{0,'0'},{1,'1'},{2,'2'},{3,'3'},{4,'4'},{5,'5',},
                         {6,'6'},{7,'7'},{8,'8'},{9,'9'},
                         {10,'A'},{11,'B'},{12,'C'},{13,'D'},{14,'E'},{15,'F'}};
    int base_dec;
    cout<<"Ingrese el numero en base 10: "; cin>>base_dec;
    list<char>res_base;
    while(base_dec>0){
        res_base.push_front(basem[base_dec%base]);
        base_dec/=base;
    }
    cout<<"Su resultado en base "<<base<<" : ";
    for(char x:res_base){
        cout<<x;
    }
}
void base_n_A_m(){
    cout<<"base n a m"<<endl;
    int base_ini;
    cout<<"Ingrese la base inicial: ";cin>>base_ini;
    int base_fin;
    cout<<"base a transformar: ";cin>>base_fin;
    string number_base;
    cout<<"Ingrese el numero en base "<<base_ini<<": "; cin>>number_base;
    map<char,int>base = {{'0',0},{'1',1},{'2',2},{'3',3},{'4',4},{'5',5},
                         {'6',6},{'7',7},{'8',8},{'9',9},
                         {'A',10},{'B',11},{'C',12},{'D',13},{'E',14},{'F',15}};
    int res_base_dec=0;
    for(int i = number_base.size()-1,x=0;i>=0; i--,x++){
        res_base_dec+=base[number_base[i]]*pow(base_ini,x); //almacena resultado para base 10
    }
    //transforma de 10 a la base final
    map<int,char>basem = {{0,'0'},{1,'1'},{2,'2'},{3,'3'},{4,'4'},{5,'5',},
                         {6,'6'},{7,'7'},{8,'8'},{9,'9'},
                         {10,'A'},{11,'B'},{12,'C'},{13,'D'},{14,'E'},{15,'F'}};
    list<char>res_base;
    while(res_base_dec>0){
        res_base.push_front(basem[res_base_dec%base_fin]);
        res_base_dec/=base_fin;
    }
    cout<<"Su resultado en base "<<base_fin<<" : ";
    for(char x:res_base){
        cout<<x;
    }
}
//base 2^j a 2
void baseBinComplemento(){
    map<char,vector<int>> basebin = {{'0',{0,0,0,0}},
                                     {'1',{0,0,0,1}},
                                     {'2',{0,0,1,0}},
                                     {'3',{0,0,1,1}},
                                     {'4',{0,1,0,0}},
                                     {'5',{0,1,0,1}},
                                     {'6',{0,1,1,0}},
                                     {'7',{0,1,1,1}},
                                     {'8',{1,0,0,0}},
                                     {'9',{1,0,0,1}},
                                     {'A',{1,0,1,0}},
                                     {'B',{1,0,1,1}},
                                     {'C',{1,1,0,0}},
                                     {'D',{1,1,0,1}},
                                     {'E',{1,1,1,0}},
                                     {'F',{1,1,1,1}}};
    //EMPIEZA EL CODIGO
    int j;
    cout<<"Ingrese j: ";cin>>j;
    string base;
    cout<<"Ingrese el numero en base "<<pow(2,j)<<" : "; cin>>base;
    list<vector<int>>ls;
    for(int i = base.size()-1; i >= 0; i--){
        vector<int>aux;
        for(const auto& it:basebin){
            if(it.first == base[i]){
                for(int x=(it.second).size()-j;x<int((it.second).size());x++){
                    aux.push_back(it.second[x]);
                }
            }
        }
        ls.push_front(aux);
    }
    //muestra el resultado
    cout<<"Resultado: ";
    for(const auto& vec:ls){
        for(int x : vec){
            cout<<x;
        }
    }
}
int main(){
    //base_n_A_10();
    //base_10_A_n();
    //base_n_A_m();
    baseBinComplemento();
    return 0;
}