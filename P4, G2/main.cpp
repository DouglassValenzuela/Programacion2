#include <iostream>
#include <stdio.h>
using namespace std;
char seguir;
int numero,mayor,par;
int main()
{
    mayor=0

do{
    cout <<"Ingrese un numero entero..>";
    cin>>numero;
    if (numero%2==0)
    {
        numero=par;
    }
    if(mayor<par)
    {
        mayor=par;
    }
    cout<<"\n"<<"Desea continuar (s/n)?:";
fflush( stdin );
    cin>>seguir;
}
while(seguir != 'n')

cout<<"Numero par mayor es..."<<mayor;
}
