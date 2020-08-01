#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double a = 2, b = 3, c = 5, media = a+b+c;
	double aux;
	
	cin >> aux;
	
	a *= aux;
	
	cin >> aux;
	
	b *= aux;
	
	cin >> aux;
	
	c *= aux;
	media = (a+b+c) / media;

	cout << "MEDIA = " << fixed << setprecision(2) << media << endl;

	return 0;
}