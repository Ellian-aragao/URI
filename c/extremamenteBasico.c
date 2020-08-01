#include <stdio.h>
int main() {
    int total = 0;
    for (int i = 0; i < 2; i++) {
        int aux;
        scanf("%d",&aux);
        total += aux;
    }
    printf("X = %d\n",total);
    return 0;
}