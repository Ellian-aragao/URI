import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double total = 0;
        for (int i = 0; i < 2; i++) {
            sc.nextInt();
            int quantidade = sc.nextInt();
            double preco = sc.nextDouble();
            total += quantidade * preco;
        }
        String str = String.format("%.2f",total);
        System.out.println("VALOR A PAGAR: R$ " + str);
        sc.close();
    }
}
