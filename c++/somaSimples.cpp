#include <iostream>
 
using namespace std;
 
int main(){
    int vet[2];
    int sum=0;
    for (int i = 0; i < 2; i++){
        cin >> vet[i];
        sum += vet[i];
    }
    cout << "SOMA = " << sum << endl;
    return 0;
}