import java.util.Scanner;

import javax.sound.sampled.Line;

public class LeerPorConsola {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        String palabra;
        int numero;
        float numer;
        double number;
        char letra;

        System.out.print("Digite un numero: ");
        numero = entrada.nextInt(); //para entero
        number = entrada.nextDouble(); //para un double
        numer = entrada.nextFloat(); //para float
        System.out.print("Digite una palabra: ");
        letra = entrada.next().charAt(0); //para caracter
        palabra = entrada.nextLine(); //para un string
        System.out.println("La letra es: "+letra);
        
    }
}
