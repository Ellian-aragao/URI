#include <stdio.h>
int main(){
    double a,b;
    scanf("%lf",&a);
    a = a * 3.5;
    scanf("%lf",&b);
    b = b * 7.5;
    double media = (a + b) / 11;
    printf("MEDIA = %.5lf\n",media);
    return 0;
}