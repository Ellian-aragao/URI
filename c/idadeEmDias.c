#include <stdio.h>
int main() {
    int dia;
    scanf("%d",&dia);
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

    printf("%d ano(s)\n",ano);
    printf("%d mes(es)\n",mes);
    printf("%d dia(s)\n",dia);

    return 0;
}