/*5 – Pedrinho tem um cofrinho com muitas moedas e deseja saber quantos reais conseguiu poupar. Faça
um algoritmo para ler a quantidade de cada tipo de moeda e mostre o valor total economizado em reais.
Considere que existam moedas de 1, 5, 10, 25 e 50 centavos e ainda moeda de 1 real. Não havendo moeda
de um destes tipos, a quantidade respectiva é zero.*/

#include <iostream>
using namespace std;

int main(){

    float umReal, qtdReal, qtdUm, qtdCinco, qtdDez, qtdVincin, qtdCinq, total;
    

    cout<<"A quantidade de moedas de um centavo é de: "<<endl;
    cin>>qtdUm;

    cout<<"A quantidade de moedas de cinco centavos é de: "<<endl;
    cin>>qtdCinco;
    
    cout<<"A quantidade de moedas de dez centavos é de: "<<endl;
    cin>>qtdDez;
    
    cout<<"A quantidade de moedas de vinte e cinco centavos é de: "<<endl;
    cin>>qtdVincin;
    
    cout<<"A quantidade de moedas de cinquenta centavos é de: "<<endl;
    cin>>qtdCinq;

    cout<<"A quantidade de moedas de um real é de: "<<endl;
    cin>>qtdReal;

    total = (qtdUm * 0.01) + (qtdCinco * 0.05) + (qtdDez * 0.10) + (qtdVincin * 0.25) + (qtdCinq * 0.50) + (qtdReal * 1.00);

    cout<<"O valor total em moedas é de: R$" << total <<endl;  

}