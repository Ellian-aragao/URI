#include <stdio.h>
int main() {
    double vet[3];
    for (int i = 0; i < 3; i++)
        scanf("%lf",&vet[i]);

    double total = (vet[0] * vet[2])/2;
    printf("TRIANGULO: %.3lf\n",total);
    
    total = vet[2] * vet[2] * 3.14159;
    printf("CIRCULO: %.3lf\n",total);
    
    total = ((vet[0] + vet[1])*vet[2])/2;
    printf("TRAPEZIO: %.3lf\n",total);
    
    total = vet[1] * vet[1];
    printf("QUADRADO: %.3lf\n",total);
    
    total = vet[0] * vet[1];
    printf("RETANGULO: %.3lf\n",total);        
    return 0;
}
