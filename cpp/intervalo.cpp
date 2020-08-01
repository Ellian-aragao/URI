#include <iostream>
int main () {
    float valor;
    std::cin >> valor;
    if (valor >= 0 && valor <= 100) {
        if (valor <= 25) {
            std::cout << "Intervalo [0,25]" << std::endl;
        } else if (valor <= 50) {
            std::cout << "Intervalo (25,50]" << std::endl;
        } else if (valor <= 75) {
            std::cout << "Intervalo (50,75]" << std::endl;
        } else {
            std::cout << "Intervalo (75,100]" << std::endl;
        }
    } else {
        std::cout << "Fora de intervalo" << std::endl;
    }
}