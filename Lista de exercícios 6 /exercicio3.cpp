/*Faça um algoritmo que calcule e imprima o valor da conta de luz, a partir da leitura do consumo
em KW/k do mês anterior e do mês atual marcado no relógio. O cálculo deverá se basear nos dados da
tabela abaixo.
Consumo Valor de 1
KW/h
0-70 R$0,09
71-150 R$0,20
151-200 R$0,23
Acima de 200 R$0,26*/

#include <iostream>
using namespace std;

int main(){
    int leituraAnterior, leituraAtual, leituraTotal, adicao;
    float contaFinal;

    cout<<"Leitura do mês passado: ";
    cin>>leituraAnterior;
    cout<<"Leitura do mês presente: ";
    cin>>leituraAtual;

    leituraTotal = leituraAnterior + leituraAtual;

    if(leituraTotal >= 0 && leituraTotal <= 70){
        adicao = leituraTotal * 0.09;
        cout<<"Sua conta ficou: "<<adicao<<endl;
    }
    if(leituraTotal >= 71 && leituraTotal <= 150){
        adicao = leituraTotal * 0.20;
        cout<<"Sua conta ficou: "<<adicao<<endl;
    }
    if(leituraTotal >= 151 && leituraTotal <= 200){
        adicao = leituraTotal * 0.23;
        cout<<"Sua conta ficou: "<<adicao<<endl;
    }
    if(leituraTotal  >= 200){
        adicao = leituraTotal * 0.26;
        cout<<"Sua conta ficou: "<<adicao<<endl;
    }
    return 0;
