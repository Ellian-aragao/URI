#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double area;
    cin >> area;
    area *= 3.14159 * area;
    cout << "A=" << fixed << setprecision(4) << area << endl;
    return 0;
}