/*
Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro
desta área para o usuário.
*/
#include <iostream>

int main() {
    int lado, area, dobro;
    std::cout << "Digite o valor do lado do quadrado: ";
    std::cin >> lado;
    area = lado * lado;
    dobro = area * 2;
    
    std::cout << "O dobro da area do quadrado e: " << dobro << std::endl;
    return 0;
}
