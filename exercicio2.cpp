#include <iostream>
using namespace std;


int main()

{
    setlocale(LC_ALL, "Portuguese");

    float valorTotal, gorjeta, totalGorjeta;
    float porcentagem = 0.15;

    cout<<"O valor gasto pelo cliente foi de: ";
    cin>>valorTotal;
   
    gorjeta = valorTotal * porcentagem;
   
    cout<<"A gorjeta é de: "<<gorjeta<<endl;
   
    totalGorjeta = valorTotal + gorjeta;
   
    cout<<"O total da sua conta ficou R$"<<totalGorjeta<<" reais"<<endl;
   
}