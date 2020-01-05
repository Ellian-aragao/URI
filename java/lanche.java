import java.util.Scanner;

public class lanche {
    public static void main (String[] args) {
        float custos = 0;
        int a;
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();

        switch(a) {
            case 1:
                custos += 4;
                break;
            case 2:
                custos += 4.5;
                break;
            case 3:
                custos += 5;
                break;
            case 4:
                custos += 2;
                break;
            case 5:
                custos += 1.5;
                break;        
        }

        a = sc.nextInt();
        custos *= a;
        
        String str = String.format("%.02f", custos);
        System.out.println("Total: R$ " + str);
        sc.close();
    }
}
