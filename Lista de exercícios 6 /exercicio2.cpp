#include <iostream>
using namespace std;

int main(){
    int A, B;
    float total;
    string C, divisao, multiplicacao, subtracao, adicao;

    cout<<"Adicione valor para A: ";
    cin>>A;

    cout<<"Adicione valor para B: ";
    cin>>B;

    cout<<"Tipo de operador aritmético a ser usado: Adição, Subtração, Multiplicação, Divisão: ";
    cin>>C;

    if (C == adicao){
        total = A + B;
        cout<<"Total: "<<total<<endl;
    
    }
    if (C == subtracao){
        total = A - B;
        cout<<"Total: "<<total<<endl;
    
    }
    if (C == multiplicacao){
        total = A * B;
        cout<<"Total: "<<total<<endl;
    
    }
    if (C == divisao){
        total = A / B;
        cout<<"Total: "<<total<<endl;
    
    }
    return 0;




    
}