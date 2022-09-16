#include <iostream>
using namespace std;

int main()

{
int numeroMatricula;
float nota1, nota2, nota3, media;

    cout<<"Número de matrícula do aluno: ";
    cin>>numeroMatricula;

    cout<<"Nota 1: ";
    cin>>nota1;

    cout<<"Nota 2: ";
    cin>>nota2;

    cout<<"Nota 3: ";
    cin>>nota3;

    media = ((nota1 * 3.2) + (nota2 * 5.5) + (nota3 * 1.3)) / 10;

    cout<<"O aluno "<<numeroMatricula<<" obteve média "<<media<<endl;
    

}