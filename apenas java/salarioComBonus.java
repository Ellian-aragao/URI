import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        sc.nextLine();
        double salario = sc.nextDouble();
        double vendas = sc.nextDouble();
        salario += vendas * 0.15;
        String str = String.format("%.2f",salario);
        System.out.println("TOTAL = R$ " + str);
        sc.close();
    }
}
