/*- Escreva um programa que receba um valor referente a uma hora, caso o valor não esteja no intervalo
00 até as 24 informar que não é uma hora válida, caso esteja no intervalo calcular e informar quantas
horas faltam ou já passaram das 12 horas.
Construa o diagrama de blocos deste exercício.
Execute o teste de mesa deste algoritmo utilizando o método chinês com os seguintes valores:
Teste 1: 32
Teste 2: 2
Teste 3: 18*/

#include <iostream>
using namespace std; 

int main(){
    int hr, hrCal;
    
    cout<<"Informe a hora: ";
    cin>>hr;
    
    if (hr>=0 && hr<=24){
        
        if (hr>12){
            hrCal = hr - 12;
            cout<<"Passaram "<<hrCal<<" hora das 12 horas!!!";
        }
            
            else if (hr<12){
                hrCal = hr- 12;
                cout<<"Passaram "<<hrCal<<" das 12 horas";
        }
        else{
            cout<<"São doze horas!!1"<<endl;
        }

    }
}