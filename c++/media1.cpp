#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double a,b;
    cin >> a;
    a = a * 3.5;
    cin >> b;
    b = b * 7.5;
    double media = (a + b) / 11;
    cout << "MEDIA = " << setprecision(5) << fixed << media << endl;
    return 0;
}