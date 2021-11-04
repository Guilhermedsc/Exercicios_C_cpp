/*
Faça um Programa que leia um número e exiba o dia correspondente da semana.
(1-Domingo, 2- Segunda, etc.),
se digitar outro valor deve aparecer valor inválido.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int dia=0;

    cout<<"Digite o dia da semana: \n";
    while(true){
        cout << "$ ";
        cin >> dia;

        if(dia == 1) cout<<"Segunda-feira"<<endl;
        else if(dia == 2) cout<<"Terca-feiraa"<<endl;
        else if(dia == 3) cout<<"Quarta-feira"<<endl;
        else if(dia == 4) cout<<"Quinta-feira"<<endl;
        else if(dia == 5) cout<<"Sexta-feira"<<endl;
        else if(dia == 6) cout<<"Sabado-feira"<<endl;
        else if(dia == 7) cout<<"Domingo-feira"<<endl;
        else cout << "Dia invalido!" << endl; 
    }

    return 0;
}
