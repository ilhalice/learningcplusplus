/*Faça um algoritmo para controlar o pagamento de comissão de vendedores de peças, levando-se em
consideração que sua comissão será de 5% do total da venda e que você tem os seguintes dados:
Identificação do vendedor
Código da peça
Preço unitário da peça
Quantidade vendida*/
#include <iostream>
using namespace std;


int main()

{
    //calcular o estoque médio de uma peça
    int estoqueMedio, quantMinima, quantMaxima;

    cout<< "Informe a quantidade máxima de peças: ";
    cin>>quantMaxima;

    cout<< "Informe a quantidade mínima de peças ";
    cin>>quantMinima;

    estoqueMedio = (quantMinima + quantMaxima) / 2;

    cout<<"O estoque médio é de "<<estoqueMedio<<" peças" <<endl;

}

