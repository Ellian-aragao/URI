import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double vet[] = new double[3];
        for (int i = 0; i < 3; i++) {
            vet[i] = sc.nextDouble();
        }
        
        double total = (vet[0] * vet[2])/2;
        String str = String.format("%.3f",total);
        System.out.println("TRIANGULO: " + str);
        
        total = vet[2] * vet[2] * 3.14159;
        str = String.format("%.3f",total);
        System.out.println("CIRCULO: " + str);
        
        total = ((vet[0] + vet[1])*vet[2])/2;
        str = String.format("%.3f",total);
        System.out.println("TRAPEZIO: " + str);
        
        total = vet[1] * vet[1];
        str = String.format("%.3f",total);
        System.out.println("QUADRADO: " + str);
        
        total = vet[0] * vet[1];
        str = String.format("%.3f",total);
        System.out.println("RETANGULO: " + str);
        
        sc.close();
    }
}
