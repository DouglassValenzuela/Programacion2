#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int numero,par,digito,sumapar;
int main()
{
    cout <<"Escriba un numero...";
    cin>>numero;
    while (numero !=0)
    {
        digito=numero%10;
        numero=numero/10;
        cout<<digito;

        if(digito%2==0)
        {
            par++;
            sumapar+=digito;
        }
    }
    cout <<"\n"<<"Digitos pares   "<<par;
    cout <<"\n"<<"Suma de los digitos pares   "<<sumapar;
}
