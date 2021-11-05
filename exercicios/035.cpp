/*
Faça um Programa que peça um número correspondente a um determinado ano e em
seguida informe se este ano é ou não bissexto.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int ano=0;

    cout << "Digite o ano: ";
    cin >> ano;

    if(ano%4==0 && ano%100!=0 || ano%400==0) cout << "O ano " << ano << " é bissexto." << endl;
    else cout << "O ano " << ano << " não é bissexto." << endl;

    return 0;
}
