/*Todo restaurante, embora por lei não possa obrigar o cliente a pagar, cobra 15% para o garçom.
Elabore um algoritmo que após ler o valor total do consumo, calcule a gorjeta e o total a pagar com
a gorjeta.
Em seguida, faça um teste de mesa do algoritmo desenvolvido.*/

#include <iostream>
using namespace std;


int main()

{
    setlocale(LC_ALL, "Portuguese");

    float valorTotal, gorjeta, totalGorjeta;
    float porcentagem = 0.15;

    cout<<"O valor gasto pelo cliente foi de: ";
    cin>>valorTotal;
   
    gorjeta = valorTotal * porcentagem;
   
    cout<<"A gorjeta é de: "<<gorjeta<<endl;
   
    totalGorjeta = valorTotal + gorjeta;
   
    cout<<"O total da sua conta ficou R$"<<totalGorjeta<<" reais"<<endl;
   
}