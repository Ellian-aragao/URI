#include <stdio.h>
int main() {
    int maior;
    scanf("%d",&maior);
    for (int i = 1; i < 3; i++) {
        int aux;
        scanf("%d",&aux);
        if (aux >= maior) {
            maior = aux;
        }
    }
    printf("%d eh o maior\n",maior);
    return 0;
}
