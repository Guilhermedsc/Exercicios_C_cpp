/*
Faça um Programa que pergunte quanto você ganha por hora e o número de horas
trabalhadas no mês.

Calcule e mostre o total do seu salário no referido mês,
sabendo-se que são descontados 11% para o Imposto de Renda,
8% para o INSS e 5% para o sindicato, faça um programa que nos dê:
    salário bruto.
    quanto pagou ao INSS.
    quanto pagou ao sindicato.
    o salário líquido.
calcule os descontos e o salário líquido, conforme a tabela abaixo:

    + Salário Bruto : R$
    - IR (11%) : R$
    - INSS (8%) : R$
    - Sindicato ( 5%) : R$
    = Salário Liquido : R$

Obs.: Salário Bruto - Descontos = Salário Líquido.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    float valor_hora=0, hora_mes=0;
    float salario_bruto=0, IR=0, INSS=0, sindicato=0, salario_liquido=0;

    cout << "Digite quanto ganha por hora e quantas horas trabalha por mes: " << endl;
    cin >> valor_hora >> hora_mes;
    endl(cout);
    
    salario_bruto = valor_hora * hora_mes;
    IR =  salario_bruto * (11/100);
    INSS = salario_bruto * (8/100);
    sindicato = salario_bruto * (5/100);
    salario_liquido = salario_bruto - IR - INSS - sindicato;

    cout << "Salario bruto: R$ " << salario_bruto << endl;
    cout << "IR: R$ " << IR << endl;
    cout << "INSS: R$ " << INSS << endl;
    cout << "Sindicato: R$ " << sindicato << endl;
    cout << "Salario liquido: R$ " << salario_liquido << endl;

    return 0;
}
