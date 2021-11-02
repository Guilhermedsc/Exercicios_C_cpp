/*
Faça um Programa que verifique se uma letra digitada é "F" ou "M".
Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    char sexo;

    cout << "Digite a letra referente ao sexo: ";
    cin >> sexo;

    if(sexo == 'M' || sexo == 'm'){
        cout << "Masculino" << endl;
    }else if(sexo == 'F' || sexo == 'f'){
        cout << "Feminino" << endl;
    }else{
        cout << "Sexo invalido" << endl;
    }
}
