import java.util.Scanner;
public class salario {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int number = sc.nextInt();
        int salaperhour = sc.nextInt();
        double valorperhour = sc.nextDouble();
        
        System.out.println("NUMBER = " + number);
        String str = String.format("%.2f",salaperhour * valorperhour);
        System.out.println("SALARY = U$ " + str);
        
        
        sc.close();
    }
}
