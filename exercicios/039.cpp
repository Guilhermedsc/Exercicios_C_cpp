/*
Faça um Programa que peça um número inteiro e determine se ele é par ou impar.
Dica: utilize o operador módulo (resto da divisão).
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int  n=0;

    cout << "Digite um numero:" << endl;
    while(true){
        cout << "$ ";
        cin >> n;

        if(n % 2 == 0) cout << "Par" << endl;
        else cout << "Impar" << endl;        
        endl(cout);
    }
    return 0;
}
