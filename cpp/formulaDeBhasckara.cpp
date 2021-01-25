#include <iostream>
#include <iomanip>
#include <math.h>

void printValues(double &r1, double &r2)
{
    std::cout << std::fixed << std::setprecision(5);
    std::cout << "R1 = " << r1 << std::endl;
    std::cout << "R2 = " << r2 << std::endl;
}

double Delta(double &a, double &b, double &c)
{
    return pow(b, 2) - 4 * a * c;
}

double *Bhasckara(double &a, double &b, double &delta)
{
    double *x = new double[2];
    x[0] = (-b + sqrt(delta)) / (2 * a);
    x[1] = (-b - sqrt(delta)) / (2 * a);
    return x;
}

int main()
{
    double a, b, c;
    std::cin >> a >>  b >> c;
    double delta = Delta(a, b, c);
    if (delta > 0 && a != 0)
    {
        double *x = Bhasckara(a, b, delta);
        printValues(x[0], x[1]);
        delete x;
    }
    else
        std::cout << "Impossivel calcular" << std::endl;

    return 0;
}