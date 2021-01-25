import java.util.Scanner;

public class formulaDeBhasckara {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Double a = sc.nextDouble(), b = sc.nextDouble(), c = sc.nextDouble();
        Double delta = Delta(a, b, c);
        if (delta > 0 && a != 0) {
            Double[] x = Bhasckara(a, b, delta);
            printValues(x[0], x[1]);
        } else {
            System.out.println("Impossivel calcular");
        }
        sc.close();
    }

    public static void printValues(Double r1, Double r2) {
        System.out.println(String.format("R1 = %.5f", r1));
        System.out.println(String.format("R2 = %.5f", r2));
    }

    public static Double Delta(Double a, Double b, Double c) {
        return (Math.pow(b, 2) - 4 * a * c);
    }

    public static Double[] Bhasckara(Double a, Double b, Double delta) {
        Double[] x = { ((-b + Math.sqrt(delta)) / (2 * a)), ((-b - Math.sqrt(delta)) / (2 * a)) };
        return x;
    }
}