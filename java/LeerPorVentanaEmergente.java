import java.text.DecimalFormat;

import javax.print.attribute.standard.JobHoldUntil;
import javax.swing.JOptionPane;

public class LeerPorVentanaEmergente {
    public static void main(String[] args) {
        String cadena;
        int entero;
        float flotante;
        char letra;

        //PEDIR DATOS
        cadena = JOptionPane.showInputDialog("DIGITE UNA CADENA: ");
        entero = Integer.parseInt(JOptionPane.showInputDialog("DIGITE UN ENTERO: "));
        letra = JOptionPane.showInputDialog("Digite un caracter: ").charAt(0);
        flotante = Float.parseFloat(JOptionPane.showInputDialog("Digite un decimal: "));
        //MOSTRAR DATOS
        JOptionPane.showMessageDialog(null, "LA CADENA ES: "+cadena);
        JOptionPane.showMessageDialog(null, "EL NUMERO ES "+entero);
        JOptionPane.showMessageDialog(null, "La letra es: "+ letra);
        JOptionPane.showMessageDialog(null, "El flotante es: "+flotante);
        

    }
}
