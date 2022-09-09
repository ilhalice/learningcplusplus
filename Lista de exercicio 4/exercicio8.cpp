/*Escreva um programa que receba um número inteiro entre 1 e 12 referente ao número do mês, o
programa deverá exibir o mês por extenso, caso informado um número fora do intervalo, deverá
apresentar uma mensagem com esta informação.*/

#include <iostream>
using namespace std;

int main(){
    int mes;
    
    cout<<"Digite um número correspondente a um mês do ano:"<<endl;
    cin>>mes;

switch(mes){
    case 1:
        cout<<"Janeiro";
        break;
    
    case 2:
        cout<<"Fevereiro";
        break;
    
    case 3:
        cout<<"Março";
        break;
    
    case 4:
        cout<<"Abril";
        break;
    
    case 5:
        cout<<"Maio";
        break;
    
    case 6:
        cout<<"Junho";
        break;
    
    case 7:
        cout<<"Julho";
        break;
    
    case 8:
        cout<<"Agosto";
        break;
    
    case 9:
        cout<<"Setembro";
        break;
    
    case 10:
        cout<<"Outubro";
        break;
    
    case 11:
        cout<<"Novembro";
        break;
    
    case 12:
        cout<<"Dezembro";
        break;
        
    default:
        cout<<"Mês informado é inválido"<<endl;
        break;
    
};
}