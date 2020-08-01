#include <iostream>
#include <iomanip>
using namespace std; 
int main() {
    double total = 0;
    for (int i = 0; i < 2; i++) {
        int quantidade;
        cin >> quantidade;
        cin >> quantidade;
        double preco;
        cin >> preco;
        total += quantidade * preco;
    }
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << endl;
    return 0;
}
