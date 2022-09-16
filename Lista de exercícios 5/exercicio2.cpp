/*Faça um algoritmo que leia a velocidade permitida em uma via, a velocidade praticada por um
motorista, e informe se o mesmo receberá multa ou não, e o valor a pagar. Caso tenha excedido a
velocidade em até 20% da permitida, o motorista deve receber uma multa de R$ 102,00. Caso tenha
excedido a velocidade acima de 20% da permitida, o motorista receberá uma multa de R$ 500,00*/

#include <iostream>

using namespace std;

int main()

{
    int velocidadePerm, velocidadePrat, maximadamaxima;
    
    cout<<"Insira a velocidade permitida: ";
    cin>>velocidadePerm;
    
    cout<<"Insira a velocidade praticada pelo motorista: ";
    cin>>velocidadePrat;
    
    maximadamaxima = (velocidadePerm * 0.2) + velocidadePerm;
    
    if (velocidadePrat<velocidadePerm){
        cout<<"Você não receberá multa! :D";
    }
    
    else if (velocidadePrat > maximadamaxima){
        cout<<"Você pagará a multa de R$ 500,00 reais";
        
    }
    else if (velocidadePrat <= maximadamaxima){
        cout<<"Você pagará R$ 102,00 reais";
    }
    
    
}
