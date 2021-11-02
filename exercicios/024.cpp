/*
Faça um Programa que leia três números e mostre o maior deles.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    float n1=0, n2=0, n3=0;

    cout << "Digite 3 numeros respectivamente:" << endl;
    cin >> n1 >> n2 >> n3;

    if(n1 > n2 && n1 > n3){
        cout << "O maior numero é: " << n1 << endl;
    }else if(n2 > n1 && n2 > n3){
        cout << "O maior numero é: " << n2 << endl;
    }else{
        cout << "O maior numero é: " << n3 << endl;
    }

    return 0;
}
