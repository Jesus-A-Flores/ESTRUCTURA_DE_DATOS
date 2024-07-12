#include <iostream>
using namespace std;
class Persona{
private:
    string nombre;
    int edad;
public:
    /*Persona(string nombre,int edad):
    nombre(nombre),edad(edad){}*/
    Persona(string nombre,int edad){
        this->edad = edad;
        this->nombre =nombre;
    }
    int getedad(){
        return edad;
    }
    void mostrar(){
        cout<<"Nombre: "<<nombre<<"\nEdad: "<<edad;
    }
};

int main(){
    Persona p("jesus",24);
    p.mostrar();
    return 0;
}
