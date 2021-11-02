/*
Faça um programa para uma loja de tintas.
O programa deverá pedir o tamanho em metros quadrados da área a ser pintada.

Considere que a cobertura da tinta é de 1 litro para cada 3 metros
quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00.

Informe ao usuário a quantidades de latas de tinta
a serem compradas e o preço total.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    float area_parede=0, rendimentoDoLitro = 3.0, litrosPorLata = 18.0, precoDaLata = 80.0, precoTotal=0;
    int latasAComprar=0;

    cout << "Digite a area da parede em metros quadrados: ";
    cin >> area_parede;

    latasAComprar = ceil(area_parede/ (rendimentoDoLitro * litrosPorLata));
    precoTotal = latasAComprar * precoDaLata;

    cout << "Voce precisara de " << latasAComprar << " latas de tinta para pintar a parede, custando R$: " << precoTotal << endl;
    return 0;
}
