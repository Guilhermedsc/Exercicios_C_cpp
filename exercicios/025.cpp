/*
Faça um Programa que leia três números e mostre o maior e o menor deles.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    float v[3];
    float maior=0, menor=0;

    cout << "Digite 3 numeros respectivamente:" << endl;
    for(int i=0; i<3; i++){
        cin >> v[i];
    }
    
    maior = v[0];
    menor = v[0];

    for(int i=0; i<3; i++){
        if(v[i] > maior){
            maior = v[i];
        }
        if(v[i] < menor){
            menor = v[i];
        }
    }
    
    cout << "Maior: " << maior << "\nMenor: " << menor << endl;
    return 0;
}
