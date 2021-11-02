/*
Faça um Programa que peça 2 números inteiros e um número real.
Calcule e mostre:
    o produto do dobro do primeiro com metade do segundo.
    a soma do triplo do primeiro com o terceiro.
    o terceiro elevado ao cubo.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1=0, n2=0;
    float n3=0, a=0, b=0, c=0;

    cout << "Digite dois numeros inteiros e um real, respectivamente:\n";
    cin >> n1 >> n2 >> n3;
    endl(cout);

    a = (n1*2) * (n2/2);
    b = (n1*3) + n3;
    c = pow(n3, 3);

    cout << "O produto do dobro do primeiro com metade do segundo: " << a << endl;
    cout << "A soma do triplo do primeiro com o terceiro: " << b << endl;
    cout << "O terceiro elevado ao cubo: " << c << endl;

    return 0;
}
