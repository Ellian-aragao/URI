import java.util.Scanner;
public class formulaDeBhasckara {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        double vet[] = new double[3];
        for (int i = 0; i < 3; i++) {
            vet[i] = sc.nextDouble();
        }

        double delta = Math.pow(vet[1],2) - 4 * vet[0] * vet[2];

        if (delta > 0) {
            double r0 =(Math.sqrt(delta) + vet[1]) / 2 * vet[0];
            String str = String.format("%.5f", r0);
            System.out.println("R1 = " + str);

            r0 =(Math.sqrt(delta) - vet[1]) / 2 * vet[0];
            str = String.format("%.5f", r0);
            System.out.println("R2 = " + str);
        } else if (delta == 0) {
            System.out.println("Impossivel calcular");
        }
        sc.close();
    }
}