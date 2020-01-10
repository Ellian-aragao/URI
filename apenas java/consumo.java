import java.util.Scanner;
public class consumo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int km = sc.nextInt();
        float l = sc.nextFloat();
        String str = String.format("%.3f", km / l);
        System.out.println(str + " km/l");

        sc.close();
    }
}
