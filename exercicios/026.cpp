/*
Faça um programa que pergunte o preço de três produtos e informe qual produto
você deve comprar, sabendo que a decisão é sempre pelo mais barato.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    float v[3];
    float menor=0;

    cout << "Digite o valor de 3 produtos:" << endl;
    for(int i=0; i<3; i++){
        cin >> v[i];
    }

    menor = v[0];

    for(int i=0; i<3; i++){
        if(v[i] < menor){
            menor = v[i];
        }
    }
    
    cout << "O menor custo benefício é o produto de R$ " << menor << endl;
    return 0;
}
