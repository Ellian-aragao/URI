#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int km;
    cin >> km;
    float l;
    cin >> l;
    cout << fixed << setprecision(3) << km / l << " km/l" << endl;
    return 0;
}
