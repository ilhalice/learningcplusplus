/*Faça um programa que recebe o número de horas trabalhadas, o valor do salário mínimo e o número
de horas extras trabalhadas. Calcule e mostre o salário a receber, seguindo as seguintes regras:*/


#include <iostream>
using namespace std;

int main(){
    int horasTrab, horaExtra;
    float salarioMin, valorHoraTrab, salarioBruto, ValorHoraEx, totalHoraEx, total;

    //salario minimo / 8 para obter o valor da hora trabalhada

    cout<<"O sálario mínimo é de: "<<endl;
    cin>>salarioMin;

    valorHoraTrab = salarioMin / 8;

    cout<<"Horas trabalhadas são de: "<<endl;
    cin>>horasTrab;

    cout<<"Horas extras trabalhadas são de: "<<endl;
    cin>>horaExtra;

    //salario minimo / 4 pra obert o valor d hora extra
    ValorHoraEx = salarioMin / 4;

    //salario bruto é horasTrab * valor da hora trabalhada
    salarioBruto = horasTrab * valorHoraTrab;
    //quantia da hora extra é horaExtra * valor da horaExtra
    totalHoraEx = horaExtra * ValorHoraEx;
    //salario a receber = salario bruto + as horas extras 
    total = salarioBruto + totalHoraEx;

    cout<<"O salário bruto será de: R$ "<<total<<endl;
}