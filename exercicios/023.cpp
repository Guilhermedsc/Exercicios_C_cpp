/*
Faça um programa para a leitura de duas notas parciais de um aluno.
O programa deve calcular a média alcançada por aluno e apresentar:
    A mensagem "Aprovado", se a média alcançada for maior ou igual a sete;
    A mensagem "Reprovado", se a média for menor do que sete;
    A mensagem "Aprovado com Distinção", se a média for igual a dez.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    float n1=0, n2=0, media=0;

    cout << "Digite as duas notas respectivamente:" << endl;
    cin >> n1 >> n2;
    
    media = (n1 + n2) / 2;

    if(media == 10){
        cout << "Aluno aprovado com distinção" << endl;
    }else if(media >= 7){
        cout << "Aluno aprovado!" << endl;
    }else{
        cout << "Aluno reprovado!" << endl;
    }

    return 0;
} 
