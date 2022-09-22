#include <iostream>
using namespace std;

int main(){
    int N;

    cout<<"Insira um número: ";
    cin>>N;

    if (N < 10){
        cout<<"Unidade";

    }
    if (N >= 10 && N <= 99){
        cout<<"Dezena";

    }
    if (N >= 100 && N <= 999){
        cout<<"Centena";

    }
    if (N >= 1000 && N <= 9999){
        cout<<"Milhar";
    }
    else {
        cout<<"Número inválido";

    }

}