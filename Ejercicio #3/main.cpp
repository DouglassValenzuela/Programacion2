#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;
int numero;
int pares, digito,sumapar;
int main()
{
    numero=0;
    pares=0;
    digito=0;
    sumapar=0;
    cout<<"Ingresar numero...";
    cin>>numero;
    while(numero !=0)
    {

        digito= numero%10;
        numero= numero/10;
    cout<<digito;

    if (digito%2==0)
      {
pares++;
sumapar+=digito;
    }

}
cout<<"\n"<<"Digitos pares  "<<pares;
cout<<"\n"<<"Suma de numeros pares  "<<sumapar;
}
