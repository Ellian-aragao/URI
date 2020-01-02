import java.util.Scanner;


public class media1 {
    public static void main(String[] args) {
        double a , b;
        Scanner sc = new Scanner(System.in);
        a =  sc.nextFloat();
        b =  sc.nextFloat();
        double soma ;
        soma = (double) ((a * 3.5f + b * 7.5f)/11f);
        String str = String.format("%.05f", soma);
        System.out.println("MEDIA = " + str);
        sc.close();
    }
}
