/*
Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.
*/
#include <iostream>

int main() {
    float raio, area;
    std::cout << "Digite o raio do circulo: ";
    std::cin >> raio;

    area = 3.14 * raio * raio;
    std::cout << "A area do circulo e: " << area << std::endl;
    return 0;
}
