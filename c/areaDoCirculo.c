#include <stdio.h>
int main() {
    double area;
    scanf("%le",&area);
    area *= 3.14159 * area;
    printf("A=%.4f\n",area);
    return 0;
}