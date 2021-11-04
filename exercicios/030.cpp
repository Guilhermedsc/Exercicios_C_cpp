/*
Faça um programa para o cálculo de uma folha de pagamento, sabendo que os
descontos são do Imposto de Renda, que depende do salário bruto
(conforme tabela abaixo) e 10% para o INSS e que o FGTS corresponde a 11% do
Salário Bruto, mas não é descontado (é a empresa que deposita).

O Salário Líquido corresponde ao Salário Bruto menos os descontos.
O programa deverá pedir ao usuário o valor da sua hora e a quantidade de horas
trabalhadas no mês.

Desconto do IR:
    Salário Bruto até 900 (inclusive) - isento
    Salário Bruto até 1500 (inclusive) - desconto de 5%
    Salário Bruto até 2500 (inclusive) - desconto de 10%
    Salário Bruto acima de 2500 - desconto de 20%

Imprima na tela as informações, dispostas conforme o exemplo abaixo.
No exemplo o valor da hora é 5 e a quantidade de hora é 220.

        Salário Bruto: (5 * 220)        : R$ 1100,00
        (-) IR (5%)                     : R$   55,00
        (-) INSS ( 10%)                 : R$  110,00
        FGTS (11%)                      : R$  121,00
        Total de descontos              : R$  165,00
        Salário Liquido                 : R$  935,00
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    float valor_hora=0, horas_trabalhadas=0, salario_bruto=0, inss=0, ir=0, descontoIR=0, salario_liquido=0, fgts=0, desconto_total=0;

    cout << "Digite o quanto voce ganha por hora e quantas horas voce trabaçha por mes: \n";
    cin >> valor_hora >> horas_trabalhadas;
    endl(cout);

    salario_bruto = valor_hora * horas_trabalhadas;

    if(salario_bruto <= 900) descontoIR = 0;
    else if(salario_bruto <= 1500) descontoIR = 5;
    else if(salario_bruto <= 2500) descontoIR = 10;
    else descontoIR = 20;

    inss = salario_bruto * 0.1;
    ir = salario_bruto * (descontoIR/100);
    fgts = salario_bruto * 0.11;
    desconto_total = inss + ir;
    salario_liquido = salario_bruto - desconto_total;

    cout << "Salario Bruto: " << salario_bruto << endl;
    cout << "(-) Desconto IR: " << ir << endl;
    cout << "(-) Desconto INSS: " << inss << endl;
    cout << "FGTS: " << fgts << endl;
    cout << "Total de descontos: " << desconto_total << endl;
    cout << "Salario Liquido: " << salario_liquido << endl;
    return 0;
}
