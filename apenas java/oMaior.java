import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int maior = sc.nextInt();
        for (int i = 1; i < 3; i++) {
            int aux = sc.nextInt();
            if (aux >= maior) {
                maior = aux;
            }
        }
        System.out.println(maior + " eh o maior");

        sc.close();
    }
}
