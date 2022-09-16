/*Escreva o algoritmo que efetue o cálculo do salário líquido de um funcionário. Para efetuar este
cálculo serão necessários os seguintes dados:
− valor da hora trabalhada;
− número de horas trabalhadas no mês;
− percentual de desconto do INSS;
Inicialmente deverá ser calculado o salário bruto e depois descontar o valor do INSS para ter o
salário líquido, mostrando o salário bruto, o valor do desconto e o salário líquido do funcionário. */

#include <iostream>
using namespace std;

int main()

{
int horasMes;
float valorHora, percentual, salarioLiquido, salarioBruto, valorDesc;

    cout<<"Valor de horas trabalhadas é de: ";
    cin>>valorHora;

    cout<<"O total de horas trabalhadas é de: ";
    cin>>horasMes;

    cout<<"O percentual de desconto é de: ";
    cin>>percentual;

    percentual = percentual / 100;

    salarioBruto =  valorHora * horasMes;

    valorDesc = salarioBruto * percentual; 

    salarioLiquido = salarioBruto - valorDesc;

    cout<<"O valor do salário bruto é de: R$ "<<salarioBruto<<". O valor do desconto é de: R$ "<<valorDesc<<". Feito o calculo, o salário líquido será de: R$ "<<salarioLiquido<<endl;

}

