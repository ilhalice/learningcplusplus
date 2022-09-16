/*Escreva um algoritmo que calcule o valor de uma prestação em atraso, utilizando a fórmula: total =
valor + (valor * ((taxa / 100) * dias)). Mostre o valor inicial e o valor corrigido.*/

#include <iostream>
using namespace std;

int main()

{
int dias;
float valor, taxa, total;

    cout<<"Dias de atraso: ";
    cin>>dias;

    cout<<"O valor inicial da prestação era de: $ ";
    cin>>valor;

    cout<<"O valor da taxa é de: ";
    cin>>taxa;

    total = valor + (valor * ((taxa / 100) * dias));

    cout<<"O valor inicial era de $ "<<valor<<" e com o acréscimo ficará $ "<<total<<endl;


}