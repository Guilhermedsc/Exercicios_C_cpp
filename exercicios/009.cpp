/*
Faça um Programa que peça a temperatura em graus Farenheit, transforme e mostre
a temperatura em graus Celsius.
C = (5 * (F-32) / 9).
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    float grausF=0, grausC=0;
    cout << "Digite a temperatura em graus Farenheit: ";
    cin >> grausF;
    grausC = (grausF - 32) * 5/9;

    cout << "A temperatura em graus Celsius: " << grausC << endl;

    return 0;
}
