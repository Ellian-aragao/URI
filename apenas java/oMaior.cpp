#include <iostream>
using namespace std;
int main() {
    int maior;
    cin >> maior;
    for (int i = 1; i < 3; i++) {
        int aux;
        cin >> aux;
        if (aux >= maior) {
            maior = aux;
        }
    }
    cout << maior << " eh o maior" << endl;
    return 0;
}
