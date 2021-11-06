/*
Faça um Programa que leia 2 números e em seguida pergunte ao usuário qual
operação ele deseja realizar.

O resultado da operação deve ser acompanhado de uma
frase que diga se o número é:
    par ou ímpar;
    positivo ou negativo;
    inteiro ou decimal.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    float n1=0, n2=0, res=0;
    char sinal=0;

    while(true){
        cout << "\nDigite dois numeros e o sinal da operacao :" << endl;
        cout << "$ ";
        cin >> n1;
        cout << "$ ";
        cin >> n2;
        cout << "# "; 
        cin >> sinal;

        if(sinal == '+') res = n1 + n2;
        else if(sinal == '-') res = n1 - n2;
        else if(sinal == '*') res = n1 * n2;
        else if(sinal == '/') res = n1 / n2;
        else cout << "Operacao invalida" << endl;

        cout << "Resultado : " << res;
        if((int)res % 2 == 0) cout << "  [Par ";
        else cout << "  [Impar ";

        if(res > 0) cout << "Positivo ";
        else cout << "Negativo ";

        if((int)res == res) cout << "Inteiro]\n";
        else cout << "Decimal]";
    }
    return 0;
}
