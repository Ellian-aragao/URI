#include <iostream>
using namespace std;
int main(){
    int vet[4];
    for (int i = 0; i < 4; i++){
        cin >> vet[i];
    }
    if (vet[1] > vet[2] && vet[3] > vet[0] && vet[2] + vet[3] > vet[0] + vet[1] && vet[2] > 0 && vet[3] > 0 && vet[0] % 2 == 0) {
        cout << "Valores aceitos" << endl;
    }
    else {
        cout << "Valores nao aceitos" << endl;
    }
    return 0;
}