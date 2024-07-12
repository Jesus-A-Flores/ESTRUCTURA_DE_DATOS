package Proyecto;

public class Prueva {
    public static void main(String[] args) {
        Padre padre = new Padre("Jesus", 19,"7335502");
        padre.getNombre("Carlos");
        System.out.println("Nombre: "+padre.setNombre());
        System.out.println("edad: "+padre.setEdad());
        System.out.println("C.I.: "+padre.setCedulaIdentidad());
    }
}