/*
Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre
em graus Farenheit.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    float grausF=0, grausC=0;
    cout << "Digite a temperatura em graus Celsius: ";
    cin >> grausC;
    grausF = (grausC * 9 / 5) + 32;

    cout << "A temperatura em graus Celsius: " << grausF << endl;

    return 0;
}
