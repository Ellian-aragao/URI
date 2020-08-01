import java.util.Scanner;
public class coordenadasDeUmPonto {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        float eixo[] = new float[2];
        for (int i = 0; i < 2; i++) {
            eixo[i] = sc.nextFloat();
        }

        if (eixo[0] > 0) {
            if (eixo[1] > 0) {
                System.out.println("Q1");
            } else if (eixo[1] < 0) {
                System.out.println("Q4");
            } else {
                System.out.println("Eixo X");
            }
        } else if (eixo[0] < 0) {
            if (eixo[1] > 0) {
                System.out.println("Q2");
            } else if (eixo[1] < 0) {
                System.out.println("Q3");
            } else {
                System.out.println("Eixo X");
            }
        } else if(eixo[1] != 0) {
            System.out.println("Eixo Y");
        } else {
            System.out.println("Origem");
        }
        sc.close();
    }
}