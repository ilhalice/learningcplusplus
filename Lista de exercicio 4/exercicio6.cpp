/*Escreva um algoritmo que leia três números: A, B e C. Encontrar e mostrar o maior, o menor e o do
meio entre os três números. Mostre os números em ordem crescente*/

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, temp;

    cout << "Numero 1: ";
    cin >> num1;

    cout << "Numero 2: ";
    cin >> num2;

    cout << "Numero 3: ";
    cin >> num3;

    if(num2 > num1){
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    if(num3 > num1){
        temp = num1;
        num1 = num3;
        num3 = temp;
    }

    if(num3 > num2){
        temp = num2;
        num2 = num3;
        num3 = temp;
    }

    cout <<num1<<" é o maior "<<num2<<" é o meio "<<num3<<" é o menor"<<endl;
}
