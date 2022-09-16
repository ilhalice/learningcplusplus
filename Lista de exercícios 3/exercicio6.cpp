/*Suponha que um caixa eletrônico disponha apenas de notas de 1, 2, 5, 10, 20, 50 e 100 reais.
Considerando que alguém está sacando um determinado valor, escreva um algoritmo que mostre a
quantidade de cada tipo de notas que o caixa deve fornecer. Suponha que o sistema monetário não utilize
centavos*/

#include <iostream>
using namespace std;

int main(){

    int n, b;

    cin >> n;

    cout << n << endl;

    cout << n/100 << " nota(s) de R$ 100,00" << endl;

    b = (n%100);

    cout << b/50 << " nota(s) de R$ 50,00" << endl;

    b = (b%50);

    cout << b/20 << " nota(s) de R$ 20,00" << endl;

    b = (b%20);

    cout << b/10 << " nota(s) de R$ 10,00" << endl;

    b = (b%10);

    cout << b/5 << " nota(s) de R$ 5,00" << endl;

    b = (b%5);

    cout << b/2 << " nota(s) de R$ 2,00" << endl;

    b = (b%2);

    cout << b/1 << " nota(s) de R$ 1,00" << endl;
    
    return 0;
}