/*
Faça um Programa que leia um número inteiro maior que 0 e menor que 1000 e
imprima a quantidade de centenas, dezenas e unidades do mesmo.

Observando os termos no plural a colocação do "e", da vírgula entre outros.

Exemplo:
326 = 3 centenas, 2 dezenas e 6 unidades
12 = 1 dezena e 2 unidades

Testar com:
326, 300, 100, 320, 310,305, 301, 101, 311, 111, 25, 20, 10, 21, 11, 1, 7 e 16
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=0, centenas=0, dezenas=0, unidades=0;

    cout << "Digite um numero de 1 a 999: " << endl;
    
    while (true){  
        cout << "$ ";
        cin >> n;

        unidades = n % 10;
        dezenas = (n % 100) / 10;
        centenas = n / 100;

        cout << "[Centenas: " << centenas << "]  [Dezenas: " << dezenas << "]  [Unidades: " << unidades << "]" << endl;
    }
    
    return 0;
}
