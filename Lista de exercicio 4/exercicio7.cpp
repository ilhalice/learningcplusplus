/*Escreva um algoritmo que receba 3 notas escolares de um aluno após ler as notas o algoritmo deverá
fazer o cálculo da média de forma ponderada, sabendo que a nota 1 tem peso 2.5 a nota 2 tem peso 5.0
e a nota 3 tem peso 2.5, após classifique o conceito deste aluno segundo a tabela abaixo:*/

#include <iostream>
using namespace std;

int main(){
    float nota1, nota2, nota3, notaFinal;
    
    cout<<"Informe suas notas: "<<endl;
    cin>>nota1;
    cin>>nota2;
    cin>>nota3;
    
    notaFinal = ((nota1 * 2.5) + (nota2 * 5.0) + (nota3 * 2.5)) / 10;
    
    if (notaFinal < 3){
        cout<<"Sua média é de: "<<notaFinal<<endl;
        cout<<"Conceito D"<<endl;
    }
    else if((notaFinal>= 3) && (notaFinal<=4.9)){
        cout<<"Sua média é de: "<<notaFinal<<endl;
        cout<<"Conceito C"<<endl;
    }
    else if ((notaFinal>=5) && (notaFinal<=7.4)){
        cout<<"Sua média é de: "<<notaFinal<<endl;
        cout<<"Conceito B"<<endl;
    }
    else if (notaFinal >= 7.4){
        cout<<"Sua média é de: "<<notaFinal<<endl;
        cout<<"Conceito A"<<endl;
    }
    
    return 0; 

}