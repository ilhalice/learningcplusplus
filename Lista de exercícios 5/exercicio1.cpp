/*Escreva um programa que receba o preço de custo de um produto e o código da sua categoria
(conforme tabela apresentada), caso for informado uma categoria diferente das apresentadas, deve
apresentar mensagem de “Categoria inválida” e finalizar o programa, caso a categoria seja válida o
programa deverá calcular o preço de venda, conforme margem de lucro da categoria.
Código da categoria Margem de lucro %
1 35%
2 28%
3 22%
4 15%*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float price, percent;
    int code;
    
    cout<<"Insert product price $ ";
    cin>>price;
    
    cout<<"Insert product code: ";
    cin>>code;
    
    if (code == 1){
        percent = (price * 0.35) + price;
        cout<<"The final price is $ "<< setprecision(5)<< percent<<endl;
    }
    else if (code == 2){
        percent = (price * 0.28) + price;
        cout<<"The final price is $ "<< setprecision(5)<<percent<<endl;
    }
    else if (code == 3){
        percent = (price * 0.22) + price;
        cout<<"The final price is $ "<< setprecision(5)<< percent<<endl;
    }
    else if (code == 4){
        percent = (price * 0.15)+ price;
        cout<<"The final price is $ "<< setprecision(5)<<percent<<endl;
    }
    else {
        cout<<"Invalid code"<<endl;
    }

    return 0;
}
