/*
Tendo como dados de entrada a altura de uma pessoa,
construa um algoritmo que calcule seu peso ideal,
usando a seguinte fórmula: (72.7*altura) - 58
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    float altura=0, pesoIdeal;

    cout << "Digite sua altura: ";
    cin >> altura;

    pesoIdeal = (72.7 * altura) - 58;

    cout << "Seu peso ideal: " << pesoIdeal;
    return 0;
}
