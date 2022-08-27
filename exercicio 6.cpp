#include <iostream>
using namespace std;

int main()

{
int anoNascimento, anoAtual, idade63, idadeAtual;

    cout<<"Ano de Nascimento: ";
    cin>>anoNascimento;


    cout<<"Ano atual: ";
    cin>>anoAtual;

    idade63 = 2063 - anoNascimento;
    idadeAtual = anoAtual - anoNascimento;

    cout<<"Você tem "<<idadeAtual<<" anos e em 2063 terá "<<idade63<<" anos."<<endl;

}

