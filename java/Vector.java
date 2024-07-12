import java.util.Random;
import java.util.Scanner;

import javax.swing.JOptionPane;

public class Vector {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        Random random = new Random();
        int n;
        int[] vec = new int[20];
        System.out.print("LA CANTIDAD DE TERMINOS: ");
        n = entrada.nextInt();
        for (int i = 0; i < n; i++) {
            vec[i] = random.nextInt();
        }

        for (int i = 0; i < n; i++) {
            JOptionPane.showMessageDialog(null,"["+i+"]: "+vec[i]);
        }
    }
}
