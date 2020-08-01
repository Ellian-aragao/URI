import java.util.Scanner;
public class extremamenteBasico {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int total = 0;
        for (int i = 0; i < 2; i++) {
            int aux = sc.nextInt();
            total += aux;
        }
        System.out.println("X = " + total);
        sc.close();
    }
}
