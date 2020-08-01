#include <stdio.h>
int main(){
    char teste[5];
    scanf("%s",teste);
    double salario,vendas;
    scanf("%lf",&salario);
    scanf("%lf",&vendas);
    salario += vendas * 0.15;
    printf("TOTAL = R$ %.2f\n",salario);
    return 0;
}