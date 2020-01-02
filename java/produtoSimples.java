import java.util.Scanner;
public class produtoSimples {
    public static void main(String[] args) {
        int a , b;
        Scanner sc = new Scanner(System.in);
        a =  sc.nextInt();
        b =  sc.nextInt();
        int soma = a*b;
        System.out.println("PROD = " + soma);
        sc.close();
    }
}
