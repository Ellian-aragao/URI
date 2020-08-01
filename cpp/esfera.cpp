#include <iostream>
#include <iomanip>
using namespace std;
#define PI 3.14159
int main() {
    double total;
    cin >> total;
    total *= total * total;
    total *= (4.0/3.0) * PI;
    cout << "VOLUME = " << fixed << setprecision(3) << total << endl; 
    return 0;
}
