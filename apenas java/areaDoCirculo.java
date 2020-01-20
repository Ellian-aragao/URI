import java.util.Scanner;
public class areaDoCirculo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double area = sc.nextDouble();
        area = 3.14159 * area * area;
        String str = String.format("%.4f",area);
        System.out.println("A=" + str);
        sc.close();
    }
}
