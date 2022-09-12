/*  Elabore um algoritmo que receba um ano (numérico inteiro) e informe se o ano é bissexto ou não.
Lembrete:
São bissextos todos os anos múltiplos de 400, ex.: 1600, 2000, 2400, 2800...
São bissextos todos os múltiplos de 4 e não múltiplos de 100, ex.: 1996, 2004, 2008, 2012, 2016...
Não são bissextos todos os demais anos. */


#include <iostream>
using namespace std;

int main()
{
    int year;

    cout <<"Ano: ";
    cin >> year;


    if(year % 400 == 0)
        cout << "É bissexto" << endl;
    else
        if( (year % 4 == 0) && (year % 100 != 0) )
            cout << "É bissexto" << endl;
        else
            cout << "Não é bissexto" << endl;


    return 0;
}
