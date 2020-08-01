#include <iostream>
using namespace std;
int main() {
    int dia;
    cin >> dia;
    int ano = 0;
    while (dia - 365 >= 0) {
        ano++;
        dia -= 365;
    }
    int mes = 0;
    while (dia - 30 >= 0) {
        mes++;
        dia -= 30;
    }

    cout << ano << " ano(s)" << endl;
    cout << mes << " mes(es)" << endl;
    cout << dia << " dia(s)" << endl;

    return 0;
}