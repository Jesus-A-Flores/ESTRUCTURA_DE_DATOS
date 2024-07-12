package Proyecto;

class Padre {
    String nombre;
    int edad;
    String cedulaIdentidad;
    public Padre(String nombre,int edad,String cedulaIdentidad){
        this.nombre = nombre;
        this.edad = edad;
        this.cedulaIdentidad = cedulaIdentidad;
    }

    public void getNombre(String nombre){
        this.nombre = nombre;
    }
    
    String setNombre(){
        return nombre;
    }

    public void getEdad(int edad){
        this.edad = edad;
    }

    int setEdad(){
        return edad;
    }

    public void getCedulaIdentidad(String cedulaIdentidad){
        this.cedulaIdentidad = cedulaIdentidad;
    }

    String setCedulaIdentidad(){
        return cedulaIdentidad;
    }
}
