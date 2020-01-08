import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int valor = sc.nextInt();
        System.out.println(valor);
        int tabela[][] = {{0,100},{0,50},{0,20},{0,10},{0,5},{0,2},{0,1}};
        for (int i = 0; i < 7; i++) {
            while (valor - tabela[i][1] >= 0){
                valor -= tabela[i][1];
                tabela[i][0]++;
            }
        }
        for (int i = 0; i < 7; i++) {
            String str = String.format("%.2f", (float)tabela[i][1]);
            System.out.println(tabela[i][0] + " nota(s) de R$ " + str);
        }
        sc.close();
    }
}