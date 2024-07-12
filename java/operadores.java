import java.util.Scanner;

public class operadores {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in); //para leer datos

        float numero1,numero2,suma;

        System.out.print("DIGITE EL NUMERO1: ");
        numero1 = entrada.nextFloat();
        System.out.print("DIGITE EL NUMERO 2: ");
        numero2 = entrada.nextFloat();

        suma = numero1 + numero2;

        System.out.println("La suma es : "+suma);

    }
}
