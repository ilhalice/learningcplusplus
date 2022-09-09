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