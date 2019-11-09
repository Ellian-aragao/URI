#include <iostream>
using namespace std;
int main(){
	int vet[4];
	for (int i = 0; i < 4; i ++)
		cin >> vet[i];
	cout << "DIFERENCA = " << vet[0] * vet[1] - vet[2] * vet[3] << endl;
	return 0;
}