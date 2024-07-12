import java.util.Scanner;

public class TresEnRaya {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char[][] tablero = new char[3][3];
        int fila, columna;
        char jugadorActual = 'X';
        boolean juegoTerminado = false;

        inicializarTablero(tablero);

        while (!juegoTerminado) {
            mostrarTablero(tablero);

            System.out.println("Turno del jugador " + jugadorActual);
            System.out.print("Ingrese la fila (1-3): ");
            fila = sc.nextInt() - 1;
            System.out.print("Ingrese la columna (1-3): ");
            columna = sc.nextInt() - 1;

            if (movimientoValido(tablero, fila, columna)) {
                tablero[fila][columna] = jugadorActual;

                if (hayGanador(tablero, jugadorActual)) {
                    mostrarTablero(tablero);
                    System.out.println("¡El jugador " + jugadorActual + " ha ganado!");
                    juegoTerminado = true;
                } else if (hayEmpate(tablero)) {
                    mostrarTablero(tablero);
                    System.out.println("¡Empate!");
                    juegoTerminado = true;
                } else {
                    jugadorActual = jugadorActual == 'X' ? 'O' : 'X';
                }
            } else {
                System.out.println("Movimiento inválido. Intente de nuevo.");
            }
        }
    }

    public static void inicializarTablero(char[][] tablero) {
        for (int i = 0; i < tablero.length; i++) {
            for (int j = 0; j < tablero[i].length; j++) {
                tablero[i][j] = '-';
            }
        }
    }

    public static void mostrarTablero(char[][] tablero) {
        for (int i = 0; i < tablero.length; i++) {
            for (int j = 0; j < tablero[i].length; j++) {
                System.out.print(tablero[i][j] + " ");
            }
            System.out.println();
        }
    }

    public static boolean movimientoValido(char[][] tablero, int fila, int columna) {
        if (fila < 0 || fila >= tablero.length || columna < 0 || columna >= tablero[0].length) {
            return false;
        }
        return tablero[fila][columna] == '-';
    }

    public static boolean hayGanador(char[][] tablero, char jugador) {
        for (int i = 0; i < tablero.length; i++) {
            if (tablero[i][0] == jugador && tablero[i][1] == jugador && tablero[i][2] == jugador) {
                return true;
            }
            if (tablero[0][i] == jugador && tablero[1][i] == jugador && tablero[2][i] == jugador) {
                return true;
            }
        }
        if (tablero[0][0] == jugador && tablero[1][1] == jugador && tablero[2][2] == jugador) {
            return true;
        }
        if (tablero[0][2] == jugador && tablero[1][1] == jugador && tablero[2][0] == jugador) {
            return true;
        }
        return false;
    }

    public static boolean hayEmpate(char[][] tablero) {
        for (int i = 0; i < tablero.length; i++) {
            for (int j = 0; j < tablero[i].length; j++) {
                if (tablero[i][j] == '-') {
                    return false;
                }
            }
        }
        return true;
    }
}