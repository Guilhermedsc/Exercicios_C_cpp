/*
Faça um Programa que pergunte em que turno você estuda.
Peça para digitar M-matutino ou V-Vespertino ou N- Noturno.

Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou
"Valor Inválido!", conforme o caso.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    char turno=0;

    cout << "Digite seu turno, M - matutino, V - vespertino, N - noturno: ";
    cin >> turno;

    turno = toupper(turno);

    if(turno == 'M') cout << "Bom dia!" << endl;
    else if(turno == 'V') cout << "Boa tarde!" << endl;
    else if(turno == 'N') cout << "Boa noite!" << endl;
    else cout << "Turno invalido!" << endl;

    return 0;
}
