#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float custos = 0;
    int a;
    cin >> a;
    switch(a){
        case 1:
            custos += 4;
            break;
        case 2:
            custos += 4.5;
            break;
        case 3:
            custos += 5;
            break;
        case 4:
            custos += 2;
            break;
        case 5:
            custos += 1.5;
            break;        
    }

    cin >> a;
    custos *= a;
    
    cout << "Total: R$ " << fixed << setprecision(2) << custos << endl;
    return 0;
}