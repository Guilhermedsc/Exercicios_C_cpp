/*
Faça um Programa que peça os 3 lados de um triângulo.
O programa deverá informar se os valores podem ser um triângulo.
Indique, caso os lados formem um triângulo, se o mesmo é:
    equilátero, isósceles ou escaleno.

Dicas:
    Três lados formam um triângulo quando a soma de
        quaisquer dois lados for maior que o terceiro;
    Triângulo Equilátero: três lados iguais;
    Triângulo Isósceles: quaisquer dois lados iguais;
    Triângulo Escaleno: três lados diferentes;
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    float lado1=0, lado2=0, lado3=0;
    int eh_triangulo=0;

    cout << "Digite o valor dos 3 lados respectivamente: " << endl;
    cin >> lado1 >> lado2 >> lado3;

    if(lado1+lado2>lado3 && lado1+lado3>lado2 && lado2+lado3>lado1){ 
        eh_triangulo=1;
        cout << "Eh triangulo" << endl;
    }else cout << "Nao eh um triangulo" << endl;

    if(eh_triangulo==1){
        if(lado1==lado2 && lado2==lado3) cout << "Equilatero" << endl;
        else if(lado1==lado2 || lado1==lado3 || lado2==lado3) cout << "Isoceles" << endl;
        else cout << "Escaleno" << endl;
        
    return 0;
}
