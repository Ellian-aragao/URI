import java.util.Scanner;


public class media2 {
    public static void main(String[] args) {
        double a,b,c;
        Scanner sc = new Scanner(System.in);
        a = sc.nextDouble();
        b = sc.nextDouble();
        c = sc.nextDouble();
        double str = (a*2f + b*3f + c*5f) / 10f;
        String soma = String.format("%.01f", str);
        System.out.println("MEDIA = " + soma);
        sc.close();
    }
}
