import java.util.Scanner;
public class distanciaEntreDoisPontos {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        float a[] = new float[4];
        for (int i = 0; i < 4; i++) {
            a[i] = sc.nextFloat();
        }
        String str = String.format("%.4f", Math.sqrt(Math.pow((a[2] - a[0]), 2) + Math.pow((a[3] - a[1]),2)));
        System.out.println(str);
        sc.close();
    }
}
