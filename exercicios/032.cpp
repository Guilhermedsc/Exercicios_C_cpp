/*
Faça um programa que lê as duas notas parciais obtidas por um aluno numa
disciplina ao longo de um semestre, e calcule a sua média.

A atribuição de conceitos obedece à tabela abaixo:
    Média de Aproveitamento  Conceito
    Entre 9.0 e 10.0         A
    Entre 7.5 e 9.0          B
    Entre 6.0 e 7.5          C
    Entre 4.0 e 6.0          D
    Entre 4.0 e zero         E

O algoritmo deve mostrar na tela as notas, a média,
o conceito correspondente e a mensagem “APROVADO” se o conceito for A, B ou C
ou “REPROVADO” se o conceito for D ou E.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    char aproveitamento=0;
    float n1=0, n2=0, media=0;

    cout << "Digite as duas notas respectivamente: " << endl;
    cin >> n1 >> n2;

    media = (n1 + n2) / 2;

    if(media >= 9) aproveitamento = 'A';
    else if(media >= 7.5) aproveitamento = 'B';
    else if(media >= 6) aproveitamento = 'C';
    else if(media >= 4) aproveitamento = 'D';
    else aproveitamento = 'E';

    if(aproveitamento != 'D' && aproveitamento != 'E') cout << "Aprovado com " << aproveitamento << endl;
    else cout << "Reprovado com " << aproveitamento << endl;
    return 0;
}
