/*
Faça um programa que peça o tamanho de um arquivo para download (em MB) e a
velocidade de um link de Internet (em Mbps), calcule e informe o tempo
aproximado de download do arquivo usando este link (em minutos).
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    float tamanho_arquivo=0, velocidade_net=0, temp_download=0;

    cout << "Digite o tamanho do arquivo em MB e a velocidade da internet em Mbps, respectivamente:" << endl;
    cin >> tamanho_arquivo >> velocidade_net;

    temp_download = (tamanho_arquivo * 8 ) / velocidade_net;

    cout << "O tempo de download do arquivo sera de " << temp_download << " segundos." << endl;
    return 0;
}
