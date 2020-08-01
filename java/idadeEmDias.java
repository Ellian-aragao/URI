import java.util.Scanner;
public class idadeEmDias {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        int dia = sc.nextInt();
        int ano = 0;
        while (dia - 365 >= 0) {
            ano++;
            dia -= 365;
        }
        int mes = 0;
        while (dia - 30 >= 0) {
            mes++;
            dia -= 30;
        }

        System.out.println(ano + " ano(s)");
        System.out.println(mes + " mes(es)");
        System.out.println(dia + " dia(s)");
        sc.close();
    }
}