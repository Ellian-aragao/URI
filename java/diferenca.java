import java.util.Scanner;

public class diferenca {
    public static void main(String[] args) {
        int a , b,d,c;
        Scanner sc = new Scanner(System.in);
        a =  sc.nextInt();
        b =  sc.nextInt();
        c =  sc.nextInt();
        d =  sc.nextInt();
                
        int soma = (a*b - c*d);
        System.out.println("DIFERENCA = " + soma);
        sc.close();
    }
}