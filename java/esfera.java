import java.util.Scanner;
public class esfera {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double total = sc.nextDouble();
        total *= total * total;
        total *= (4.0/3.0) * 3.14159;
        String str = String.format("%.3f",total);
        System.out.println("VOLUME = " + str);
        sc.close();
    }
}
