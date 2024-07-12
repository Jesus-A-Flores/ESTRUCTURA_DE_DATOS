/*abstraccion
encapsulamiento
Herencia
polimorfismo
*/

#include <iostream>
#include <conio.h>
using namespace std;
class Animal{
private:
    string nombre;
    int edad;
public:
    Animal(){ //constructor
        nombre = " ";
        edad = 0;
    }
    Animal(string nombre, int edad){
        this->nombre= nombre;
        this->edad = edad;
    }
    void setNombre(string nombre){
        this->nombre= nombre;
    }
    void setEdad(int edad){
        this->edad = edad;
    }
    string getNombre(){
        return nombre;
    }
    int getEdad(){
        return edad;
    }
    void mostrar(){
        cout<<"=====================\n";
        cout<<"|  Nombre  |  Edad  |\n";
        cout<<"=====================\n";
        cout<<"|  "<<nombre<<"    |    "<<edad<<"   |";
        cout<<"\n=====================";
    }

};

int main(){
    //Animal Animal;
    Animal A("Leon",5);
    A.getEdad();
    A.mostrar();
    return 0;
}
