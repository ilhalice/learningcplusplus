
//número 3
/*3 - Na lanchonete de Bianca são servidos três tipos de lanches, que são apresentados na tabela abaixo:
Código Descrição Valor
10 Hambúrguer 5.00
11 Cachorro Quente 3.20
12 Torrada Simples 4.50
Código Descrição Valor
Crie um algoritmo que receba o código do produto e mostre na tela a descrição do mesmo e o seu
referido valor*/

#include <iostream>
using namespace std;

int main(){
    
    int codigo;
    cout<<"Insira o código: "<<endl;
    cin>>codigo;
    
    if (codigo == 10){
        cout<<"Hambúrger"<<endl;
        cout<<"Valor: R$5.00"<<endl;
    }
    if (codigo == 11){
        cout<<"Cachorro Quente"<<endl;
        cout<<"Valor: R$3.20"<<endl;
    }
    if (codigo == 12){
        cout<<"Torrada Simples"<<endl;
        cout<<"Valor: R$4.50"<<endl;
    }
    else{
        cout<<"Código não encontrado"<<endl;
    }
    return 0;
}