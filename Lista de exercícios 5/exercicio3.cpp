/*Escrever um algoritmo para uma empresa que decide dar um reajuste a seus funcionários de
acordo com os seguintes critérios:
a) 50% para aqueles que ganham menos do que três salários mínimos;
b) 20% para aqueles que ganham entre três até dez salários mínimos;
c) 15% para aqueles que ganham acima de dez até vinte salários mínimos;
d) 10% para os demais funcionários.

Leia o nome do funcionário, seu salário e o valor do salário mínimo. Calcule o seu novo salário
reajustado. Escrever o nome do funcionário, o valor do reajuste e o seu novo salário. */

#include <iostream>

using namespace std;

int main()

{
  string nome;
  float salario, salarioMin, tresSsalarios, dezSalarios, vinteSalarios, novoSal; 
  
  cout<<"Insira o nome do funcionário: ";
  cin>>nome;
  
  cout<<"Insira o salário atual do funcionário: R$ ";
  cin>>salario;
  
  cout<<"Insira o salário mínimo: R$ ";
  cin>>salarioMin;
  
  tresSsalarios = salarioMin * 3; //
  dezSalarios = salarioMin * 10;
  vinteSalarios = salarioMin * 20;
  
  //50% para aqueles que ganham menos do que três salários mínimos
  if (salario <= tresSsalarios){
      novoSal = (salario * 0.50) + salario;
      cout<<nome<<" seu novo salário será de: R$ "<<novoSal<<" reais";
      
  }
 //20% para aqueles que ganham entre três até dez salários mínimos;
 else if (salario>=tresSsalarios && salario <= dezSalarios){
      novoSal = (salario * 0.20) + salario;
      cout<<nome<<" seu novo salário será de: R$ "<<novoSal<<" reais";
   }
 //15% para aqueles que ganham acima de dez até vinte salários mínimos;
   else if (salario>=dezSalarios && salario <= vinteSalarios){
      novoSal = (salario * 0.15)+ salario;
      cout<<nome<<", seu novo salário será de: R$ "<<novoSal<<" reais";
   }
//10% para os demais funcionários
      else if (salario < tresSsalarios && salario < dezSalarios && salario < vinteSalarios or salario > tresSsalarios && salario > dezSalarios && salario > vinteSalarios ){
     novoSal = (salario * 0.10) + salario;
     cout<<nome<<" seu novo salário será de: R$ "<<novoSal<<" reais";
      }
  

}
