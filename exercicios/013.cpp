/*
Tendo como dado de entrada a altura (h) de uma pessoa,
construa um algoritmo que calcule seu peso ideal,
utilizando as seguintes fórmulas:
    Para homens: (72.7*h) - 58
    Para mulheres: (62.1*h) - 44.7
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    float altura=0, pesoIdealH=0, pesoIdealM=0;

    cout << "Digite sua altura: ";
    cin >> altura;

    pesoIdealH = (72.7 * altura) - 58;
    pesoIdealM = (62.1 * altura) - 44.7;

    cout << "Seu peso ideal para o sexo masculino: " << pesoIdealH << "\nSeu peso ideal para o sexo feminino: " << pesoIdealM << endl;
    return 0;
}
