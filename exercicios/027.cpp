/*
Faça um Programa que leia três números e mostre-os em ordem decrescente.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    float v[3];
    float aux=0;

    cout << "Digite 3 numeros para ordená-los:" << endl;
    for(int i=0; i<3; i++){
        cin >> v[i];
    }

    for(int i=0; i<3; i++){
        for(int j=i; j<3; j++){
            if(v[i] < v[j+1]){
                aux = v[j+1];
                v[j+1] = v[i];
                v[i] = aux;
            }
        }    
    }
    
    for(int i=0; i<3; i++){
        cout << v[i] << endl;
    }

    return 0;
}
