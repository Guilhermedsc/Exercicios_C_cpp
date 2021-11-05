/*
Faça um Programa que peça um número e informe se o número é inteiro ou decimal.
Dica: utilize uma função de arredondamento.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    float n=0;

    cout << "Digite um numero:" << endl;
    while(true){
        cout << "$ ";
        cin >> n;

        if(int(n) == n) cout << "Numero inteiro" << endl;
        else cout << "Numero decimal" << endl;
        endl(cout);
    }
    return 0;
}
