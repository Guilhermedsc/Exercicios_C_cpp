/*
Faça um Programa para uma loja de tintas.

O programa deverá pedir o tamanho em metros quadrados da área a ser pintada.

Considere que a cobertura da tinta é de 1 litro para cada 6 metros quadrados
e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00
ou em galões de 3,6 litros, que custam R$ 25,00.

Informe ao usuário as quantidades de tinta a serem compradas
e os respectivos preços em 3 situações:

    comprar apenas latas de 18 litros;
    comprar apenas galões de 3,6 litros;
    misturar latas e galões, de forma que o preço seja o menor.
        Acrescente 10% de folga e sempre arredonde os valores para cima,
        isto é, considere latas cheias.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    float metrosQuadrados, metrosQuadradosMaisDez, rendimentoLitro = 6.0, litrosLata = 18.0, precoLata = 80.0,
        rendimentoLata = rendimentoLitro * litrosLata, litrosGalao = 3.6, precoGalao = 25.0, rendimentoGalao = rendimentoLitro * litrosGalao,
        precoSomenteLatas, precoSomenteGaloes, precoLatas, precoGaloes, precoLatasEGaloes;
    
    int somenteLatas, somenteGaloes, latas, galoes;

    cout << "Digite o tamanho em metros quadrados da área a ser pintada: ";
    cin >> metrosQuadrados;

    metrosQuadradosMaisDez = metrosQuadrados * 1.1;
    somenteLatas = ceil(metrosQuadrados / rendimentoLata);
    somenteGaloes = ceil(metrosQuadrados / rendimentoGalao);
    latas = floor(metrosQuadradosMaisDez / rendimentoLata);
    galoes = ceil(((int)metrosQuadradosMaisDez % (int)rendimentoLata) / rendimentoGalao);
    precoSomenteLatas = somenteLatas * precoLata;
    precoSomenteGaloes = somenteGaloes * precoGalao;
    precoLatas = latas * precoLata;
    precoGaloes = galoes * precoGalao;
    precoLatasEGaloes = precoLatas + precoGaloes;

    cout << "Somente latas: " << somenteLatas << ", custando R$ " << precoSomenteLatas << endl;
    cout << "Somente galões: " << somenteGaloes << ", custando R$ " << precoSomenteGaloes << endl;
    cout << "Latas: " << latas << "Galões: " << galoes << ", custando R$ " << precoLatasEGaloes << endl;

    return 0;
}
