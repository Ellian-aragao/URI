import java.util.Scanner;
public class somaSimples {
    public static void main(String[] args) {
        int a , b;
        Scanner sc = new Scanner(System.in);
        a =  sc.nextInt();
        b =  sc.nextInt();
        int soma = a + b;
        System.out.println("SOMA = " + soma);
        sc.close();
    }
}
