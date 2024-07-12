
import java.util.Scanner;

public class practicando {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
         
        int option;
        double saldo_inicial = 50.00;
        do {
            System.out.println("\t==OPTIONS==\n1. SALDO\n2. RETIRAR\n3. DEPOSITAR\n4. SALIR");
            System.out.print("\tOption:");
            option = entrada.nextInt();
            switch (option) {
                case 1:
                    System.out.println("SU SALDO ES: "+saldo_inicial);
                    break;
                case 2:
                    int withdrawal;
                    System.out.println("LA CANTIDAD DE DINERO QUE PUEDE RETIRAR Bs. 20, Bs. 50, Bs. 100,Bs. 200");
                    System.out.print("INGRESE LA CANTIDAD: "); 
                    withdrawal = entrada.nextInt();
                    if (withdrawal>saldo_inicial ) {
                        System.out.println("NO TIENE LA CANTIDAD DE DINERO PARA REALIZAR EL RETIRO!!");
                    }else{
                        saldo_inicial -= withdrawal;
                    }
                    break;
                case 3:
                    int deposit;
                    System.out.print("CUANTO DESEA DEPOSITAR? :");
                    deposit = entrada.nextInt();
                    saldo_inicial += deposit;
                    break;
            }
            
        } while (option!=4);
    }
}
