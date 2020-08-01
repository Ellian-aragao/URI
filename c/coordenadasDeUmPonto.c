#include <stdio.h>
int main () {
    float eixo[2];
    for (int i = 0; i < 2; i++) {
        scanf("%f",&eixo[i]);
    }
    if (eixo[0] > 0) {
        if (eixo[1] > 0) {
            printf("Q1\n");
        } else if (eixo[1] < 0) {
            printf("Q4\n");
        } else {
            printf("Eixo X\n");
        }
    } else if (eixo[0] < 0) {
        if (eixo[1] > 0) {
            printf("Q2\n");
        } else if (eixo[1] < 0) {
            printf("Q3\n");
        } else {
            printf("Eixo X\n");
        }
    } else if(eixo[1] != 0) {
        printf("Eixo Y\n");
    } else {
        printf("Origem\n");
    }
    return 0;
}