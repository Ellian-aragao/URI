import java.util.Scanner;

public class media3 {
    public static void main(String[] args) {
        float notas[] = { 2, 3, 4, 1 };
        float media = 0;
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < 4; i++) {
            float aux;
            aux = sc.nextFloat();
            notas[i] *= aux;
            media += notas[i];
        }

        media /= 10;

        if (media < 5) {
            String str = String.format("%.1f", media);
            System.out.println("Media: " + str);
            System.out.println("Aluno aprovado.");
        } else if (media >= 7) {
            String str = String.format("%.1f", media);
            System.out.println("Media: " + str);
            System.out.println("Aluno aprovado.");
        } else {
            float aux;
            aux = sc.nextFloat();
            String str = String.format("%.1f", media);
            System.out.println("Media: " + str);
            System.out.println("Aluno em exame.");
            str = String.format("%.1f", aux);
            System.out.println("Nota do exame: " + str);
            media = (media + aux) / 2;
            if (media >= 5) {
                System.out.println("Aluno aprovado.");
            } else {
                System.out.println("Aluno reprovado");
            }
            str = String.format("%.1f", media);
            System.out.println("Media final: " + str);
        }

        sc.close();
    }
}