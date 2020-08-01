#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    float eixo[2];
    for (int i = 0; i < 2; i++) {
        cin >> eixo[i];
    }
    if (eixo[0] > 0) {
        if (eixo[1] > 0) {
            cout << "Q1" << endl;
        } else if (eixo[1] < 0) {
            cout << "Q4" << endl;
        } else {
            cout << "Eixo X" << endl;
        }
    } else if (eixo[0] < 0) {
        if (eixo[1] > 0) {
            cout << "Q2" << endl;
        } else if (eixo[1] < 0) {
            cout << "Q3" << endl;
        } else {
            cout << "Eixo X" << endl;
        }
    } else if(eixo[1] != 0) {
        cout << "Eixo Y" << endl;
    } else {
        cout << "Origem" << endl;
    }
    return 0;
}