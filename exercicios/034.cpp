/*
Faça um programa que calcule as raízes de uma equação do segundo grau,
na forma ax² + bx + c.

O programa deverá pedir os valores de a, b e c e fazer as consistências,
informando ao usuário nas seguintes situações:

    Se o usuário informar o valor de A igual a zero, a equação não é do segundo
        grau e o programa não deve fazer pedir os demais valores,
        sendo encerrado;
    Se o delta calculado for negativo, a equação não possui raízes reais.
        Informe ao usuário e encerre o programa;
    Se o delta calculado for igual a zero a equação possui apenas uma raiz
        real; informe-a ao usuário;
    Se o delta for positivo, a equação possui duas raiz reais;
        informe-as ao usuário;
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    float a=0, b=0, c=0, delta=0, x1=0, x2=0;
    
    cout << "Digite o valor de a: ";
    cin >> a;

    if(a == 0) cout << "Nao eh uma equacao do segundo grau" << endl;
    else{
        cout << "Digite o valor de b e c: " << endl;
        cin >> b >> c;
    }

    delta = b*b - 4*a*c;
    if(delta < 0) cout << "Nao existem raizes reais" << endl;
    else{
        x1 = (-b + sqrt(delta))/(2*a);  // sqrt(delta) = raiz quadrada de delta
        x2 = (-b - sqrt(delta))/(2*a);
        cout << "As raizes sao: " << x1 << " e " << x2 << endl;
    }

    return 0;
}
