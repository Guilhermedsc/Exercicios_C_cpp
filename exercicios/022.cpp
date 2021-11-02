/*
Faça um Programa que verifique se uma letra digitada é vogal ou consoante.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    char letra;

    cout << "Digite uma letra: ";
    cin >> letra;

    //transforma letra em maiuscula
    letra = toupper(letra);

    if(letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
           cout << "Vogal" << endl;
    }else{
        cout << "Consoante" << endl;
    }
}
