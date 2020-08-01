#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    string str;
    cin >> str;
    double salario,vendas;
    cin >> salario;
    cin >> vendas;
    salario += vendas * 0.15;
    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << salario << endl;
    return 0;
}