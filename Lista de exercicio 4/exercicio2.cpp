/*Escreva um programa que receba um número qualquer e verifique se o número lido é par, caso seja
execute a divisão deste número por 2, caso não seja par execute a soma deste número com 5 mostrando
em qualquer condição o resultado na tela. Crie também o diagrama de blocos deste exercício*/

#include <iostream>
using namespace std;

int main(){
    int numeroqualquer, ehPar, naoehPar;
    cout<<"numero qualquer ai meu parceiro, bora conferir se eh par bora"<<endl;
    cin>>numeroqualquer;
    
    if (numeroqualquer % 2 == 0){
        ehPar = numeroqualquer / 2;
        cout<<"esse ai eh par hein e divido por 2 dá: "<<ehPar<<endl;
    }
    else{
        naoehPar = numeroqualquer + 5;
        cout<<"seu numero ai nao eh par e somado com cinco dá: "<<naoehPar<<endl;
    }
}
 