#include <stdio.h>
int main(){
    int vet[2];
    int sum=0;
    for (int i = 0; i < 2; i++){
        scanf("%d",&vet[i]);
        sum += vet[i];
    }
    printf("SOMA = %d\n",sum);
    return 0;
}