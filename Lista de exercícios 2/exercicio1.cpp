/* Faça um algoritmo para “calcular o estoque médio de uma peça”, sendo que:
ESTOQUEMÉDIO = (QUANTIDADE MÍNIMA + QUANTIDADE MÁXIMA) /2
Observação: as quantidades mínima e máxima devem ser informadas pelo usuário. */

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