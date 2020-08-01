#include <stdio.h>
int main() {
    double total = 0;
    for (int i = 0; i < 2; i++) {
        int quantidade;
        scanf("%d",&quantidade);
        scanf("%d",&quantidade);
        double preco;
        scanf("%lf",&preco);
        total += quantidade * preco;
    }
    printf("VALOR A PAGAR: R$ %0.2f\n",total);
    return 0;
}
