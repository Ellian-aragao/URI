#include <stdio.h>
#define PI 3.14159
int main() {
    double total;
    scanf("%lf",&total);
    total *= total * total;
    total *= (4.0/3.0) * PI;
    printf("VOLUME = %.3f\n",total); 
    return 0;
}
