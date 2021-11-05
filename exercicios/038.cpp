/*
Faça um Programa para um caixa eletrônico.

O programa deverá perguntar ao usuário a valor do saque e depois informar
quantas notas de cada valor serão fornecidas.

As notas disponíveis serão as de 1, 5, 10, 50 e 100 reais.
O valor mínimo é de 10 reais e o máximo de 600 reais.

O programa não deve se preocupar com a quantidade de notas existentes na
máquina.

Exemplo 1:
Para sacar a quantia de 256 reais, o programa fornece duas notas de 100,
uma nota de 50, uma nota de 5 e uma nota de 1;

Exemplo 2:
Para sacar a quantia de 399 reais, o programa fornece três notas de 100,
uma nota de 50, quatro notas de 10, uma nota de 5 e quatro notas de 1.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int  valor=0, cem=0, cinquenta=0, dez=0, cinco=0, um=0;

    cout << "Digite o valor a ser sacado (entre 10 e 600): " << endl;
    while(true){
        cout << "$ ";
        cin >> valor;

        if(valor < 10 || valor > 600) cout << "Valor invalido!" << endl;
        else {
            cem = valor / 100;
            valor -= cem * 100;
            cinquenta = valor / 50;
            valor -= cinquenta * 50;
            dez = valor / 10;
            valor -= dez * 10;
            cinco = valor / 5;
            valor -= cinco * 5;
            um = valor;

            cout << "Notas de 100: " << cem << endl;
            cout << "Notas de 50:  " << cinquenta << endl;
            cout << "Notas de 10:  " << dez << endl;
            cout << "Notas de 5:   " << cinco << endl;
            cout << "Notas de 1:   " << um << endl;
            endl(cout);
        }
    }
    return 0;
}
