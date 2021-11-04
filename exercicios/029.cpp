/*
As Organizações Tabajara resolveram dar um aumento de salário aos seus
colaboradores e lhe contrataram para desenvolver o programa que calculará os
reajustes.

Faça um programa que recebe o salário de um colaborador e o reajuste segundo o
seguinte critério, baseado no salário atual:

    salários até R$ 280,00 (incluindo) : aumento de 20%
    salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
    salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
    salários de R$ 1500,00 em diante :
        aumento de 5% Após o aumento ser realizado,
    informe na tela:
        o salário antes do reajuste;
        o percentual de aumento aplicado;
        o valor do aumento;
        o novo salário, após o aumento.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    float salario=0, porc=0;

    cout << "Digite o salario: ";
    cin >> salario;

    if(salario <= 280) porc = 20;
    else if(salario <= 700) porc = 15;
    else if(salario <= 1500) porc = 10;
    else porc = 5;

    salario = salario + (salario * porc / 100);
    
    cout << "O salario com o aumento de " << porc << "% é de: " << salario<<endl;
    return 0;
}
