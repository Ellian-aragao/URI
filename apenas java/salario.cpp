#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int number;
    cin >> number;
    int salaperhour;
    cin >> salaperhour;
    double valorperhour;
    cin >> valorperhour;
    cout << "NUMBER = " << number << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salaperhour * valorperhour << endl;
    return 0;    
}
