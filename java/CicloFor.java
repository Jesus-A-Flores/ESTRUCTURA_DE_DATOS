import java.util.Scanner;

import javax.swing.JOptionPane;

public class CicloFor {
    public static void main(String[] args) {
        /*Scanner entrada = new Scanner(System.in);
        int x=1,y=0,z=0,n;
        int i;
        System.out.print("La cantidad de terminos de la serie finaci: ");
        n = entrada.nextInt();
        for(i = 0; i < n ; i++)
        {
            z = x + y;
            y = x;
            System.out.print(y+" ");
            x = z;
        }*/
        int x=1,y=0,z=0,n;


        n = Integer.parseInt(JOptionPane.showInputDialog("La cantidad de terminos de la serie de fibonacci: "));
         for (int j = 0; j < n; j++) {
            z = x + y;
            y = x;
            JOptionPane.showMessageDialog(null, "Cuando n = "+(j+1)+": "+y);
            x = z;
         }
    }
}
