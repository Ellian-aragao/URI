#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void printValues(double *r1, double *r2)
{
    printf("R1 = %.5lf\n", *r1);
    printf("R2 = %.5lf\n", *r2);
}

double Delta(double *a, double *b, double *c)
{
    return pow(*b, 2) - 4 * (*a) * (*c);
}

double *Bhasckara(double *a, double *b, double *delta)
{
    double *x = malloc(2 * sizeof(double));
    x[0] = (-(*b) + sqrt(*delta)) / (2 * (*a));
    x[1] = (-(*b) - sqrt(*delta)) / (2 * (*a));
    return x;
}

int main()
{
    double a, b, c;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    double delta = Delta(&a, &b, &c);
    if (delta > 0 && a != 0)
    {
        double *x = Bhasckara(&a, &b, &delta);
        printValues(&x[0], &x[1]);
        free(x);
    }
    else
        printf("Impossivel calcular\n");
    return 0;
}