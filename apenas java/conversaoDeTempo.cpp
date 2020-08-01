#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int segundos;
    cin >> segundos;
    int horas = 0;
    while (segundos - 3600 >= 0) {
        horas++;
        segundos -= 3600;
    }
    int minutos = 0;
    while (segundos - 60 >= 0) {
        minutos++;
        segundos -= 60;
    }
    cout << horas << ":" << minutos << ":" << segundos << endl;
    return 0;
}
