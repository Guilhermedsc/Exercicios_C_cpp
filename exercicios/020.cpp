/*
Faça um Programa que peça um valor e mostre na tela se o valor é
positivo ou negativo.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=0;

    cout << "Digite um numero: ";
    cin >> n;

    if(n > 0){
        cout << "Numero positivo" << endl;
    }else{
        cout << "Numero negativo" << endl;
    }
}
