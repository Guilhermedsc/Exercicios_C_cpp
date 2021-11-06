/*
Faça um programa que faça 5 perguntas para uma pessoa sobre um crime.
As perguntas são:
    "Telefonou para a vítima?"
    "Esteve no local do crime?"
    "Mora perto da vítima?"
    "Devia para a vítima?"
    "Já trabalhou com a vítima?"

O programa deve no final emitir uma classificação sobre a participação
da pessoa no crime.

Se a pessoa responder positivamente a 2 questões ela deve ser classificada
como "Suspeita", entre 3 e 4 como "Cúmplice" e 5 como "Assassino".
Caso contrário, ele será classificado como "Inocente".
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    char resposta=0;
    int n = 0;

    cout << "Telefonou para a vitima? (S ou N): ";
    cin >> resposta;
    if (toupper(resposta) == 'S') n++;

    cout << "Esteve no local do crime? (S ou N): ";
    cin >> resposta;
    if (toupper(resposta) == 'S') n++;

    cout << "Mora perto da vitima? (S ou N): ";
    cin >> resposta;
    if (toupper(resposta) == 'S') n++;

    cout << "Devia para a vitima? (S ou N): ";
    cin >> resposta;
    if (toupper(resposta) == 'S') n++;

    cout << "Ja trabalhou com a vitima? (S ou N): ";
    cin >> resposta;
    if (toupper(resposta) == 'S') n++;

    if(n < 2) cout << "Inocente";
    else if(n == 2) cout << "Suspeita";
    else if(n < 5) cout << "Cúmplice";
    else cout << "Assassino";
     
    return 0;
}
