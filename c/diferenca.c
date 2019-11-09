#include <stdio.h>
int main(){
	int vet[4];
	for (int i = 0; i < 4; i ++)
		scanf("%d",&vet[i]);
	printf("DIFERENCA = %d\n", (vet[0] * vet[1] - vet[2] * vet[3]));
	return 0;
}