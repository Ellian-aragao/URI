#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double vet[3];
    for (int i = 0; i < 3; i++)
        cin >> vet[i];

    cout << fixed << setprecision(3);
    double total = (vet[0] * vet[2])/2;
    cout << "TRIANGULO: " <<  total << endl;
    
    total = vet[2] * vet[2] * 3.14159;
    cout << "CIRCULO: " <<  total << endl;
    
    total = ((vet[0] + vet[1])*vet[2])/2;
    cout << "TRAPEZIO: " <<  total << endl;
    
    total = vet[1] * vet[1];
    cout << "QUADRADO: " <<  total << endl;
    
    total = vet[0] * vet[1];
    cout << "RETANGULO: " <<  total << endl;       

    return 0;
}
