#include <iostream>
using namespace std;

int main(){
    int A, B, C;
    float total;


    cout<<"Adicione valor para A: ";
    cin>>A;

    cout<<"Adicione valor para B: ";
    cin>>B;

    cout<<"Tipo de operador aritmético a ser usado - 1 para adição, 2 para subtração, 3 para multiplicação e 4 para divisão: ";
    cin>>C;

    if (C == 1){
        total = A + B;
        cout<<"Total: "<<total<<endl;
    
    }
    if (C == 2){
        total = A - B;
        cout<<"Total: "<<total<<endl;
    
    }
    if (C == 3){
        total = A * B;
        cout<<"Total: "<<total<<endl;
    
    }
    if (C == 4){
        total = A / B;
        cout<<"Total: "<<total<<endl;
    
    }




    
}