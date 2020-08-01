#include <iostream>
using namespace std;
int main() {
    int total = 0;
    for (int i = 0; i < 2; i++) {
        int aux;
        cin >> aux;
        total += aux;
    }
    cout << "X = " << total << endl;
    return 0;
}