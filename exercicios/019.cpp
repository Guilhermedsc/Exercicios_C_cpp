/*
Faça um Programa que peça dois números e imprima o maior deles.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1=0, n2=0;

    cout << "Digite dois numeros respectivamentes:" << endl;
    cin >> n1 >> n2;

    if(n1 > n2){
        cout << "Maior: " << n1 << endl;
    }else{
        cout << "Maior: " << n2 << endl;
    }
}
