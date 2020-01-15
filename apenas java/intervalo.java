import java.util.Scanner;
public class intervalo {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        float valor = sc.nextFloat();
        if (valor >= 0 && valor <= 100) {
            if (valor <= 25) {
                System.out.println("Intervalo [0,25]");
            } else if (valor <= 50) {
                System.out.println("Intervalo (25,50]");
            } else if (valor <= 75) {
                System.out.println("Intervalo (50,75]");
            } else {
                System.out.println("Intervalo (75,100]");
            }
        } else {
            System.out.println("Fora de intervalo");
        }
        sc.close();
    }
}