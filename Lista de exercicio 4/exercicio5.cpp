/*5 - Os funcionários de uma empresa receberam um aumento de salário:
1) Técnicos: 50% 2) Gerentes: 30% 3) Demais: 20%
Escreva um algoritmo que receba como entrada o salário atual e o cargo do funcionário, e apresente o
novo salário após o aumento. Imprima também o cargo, de acordo com a entrada digitada*/

#include <iostream>
using namespace std;

int main()
{
    
    float salarioAtual, aumento, novoSalario;
    int cargo; 
    
    cout<<"Digite seu salário atual: "<<endl;
    cin>>salarioAtual;
    
    cout<<"Digite seu cargo: "<<endl;
    cin>>cargo;
    
    if (cargo == 1){
        aumento = salarioAtual * 0.5;
        novoSalario = aumento + salarioAtual;
        cout<<"Cargo: Técnicos"<<endl;
        cout<<"Novo salário: R$ "<<novoSalario<<endl;
        
    }
    if (cargo == 2){
        aumento = salarioAtual * 0.3;
        novoSalario = aumento + salarioAtual;
        cout<<"Cargo: Gerentes"<<endl;
        cout<<"Novo salário: R$ "<<novoSalario<<endl;
        
    }
    if (cargo == 3){
        aumento = salarioAtual * 0.2;
        novoSalario = aumento + salarioAtual;
        cout<<"Cargo: Demais"<<endl;
        cout<<"Novo salário: R$ "<<novoSalario<<endl;
        
    }
    else{
        
        cout<<"CARGO NÃO IDENTIFICADO"<<endl;
    }
}