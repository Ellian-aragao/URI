import java.util.Scanner;
public class conversaoDeTempo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int segundos = sc.nextInt();
        int horas = 0;
        while (segundos - 3600 >= 0) {
            horas++;
            segundos -= 3600;
        }
        int minutos = 0;
        while (segundos - 60 >= 0) {
            minutos++;
            segundos -= 60;
        }
        
        String Ssegundos = String.format("%d", segundos);
        String Sminutos = String.format("%d", minutos);
        String Shoras = String.format("%d", horas);
        
        System.out.println(Shoras + ":" + Sminutos + ":" + Ssegundos);
        
        sc.close();
    }
}