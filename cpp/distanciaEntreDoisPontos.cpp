#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
	float a[4];
	for (int i = 0; i < 4; i++) {
		cin >> a[i];
	}
	cout << fixed << setprecision(4) << sqrt(pow((a[2] - a[0]), 2) + pow((a[3] - a[1]),2)) << endl;
	return 0;
}
