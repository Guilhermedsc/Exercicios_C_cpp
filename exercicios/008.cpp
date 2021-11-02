/*
Faça um Programa que pergunte quanto você ganha por hora e o número de horas
trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.
*/
#include <bits/stdc++.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float ganho_hora=0, horas_mes=0;

    std::cout << "Digite o valor do seu salario por hora: ";
    std::cin >> ganho_hora;

    std::cout << "Digite a quantidade de horas que trabalha por mês: ";
    std::cin >> horas_mes;

    std::cout << "Seu salario por mês é: " << ganho_hora * horas_mes << std::endl;

    return 0;
}
