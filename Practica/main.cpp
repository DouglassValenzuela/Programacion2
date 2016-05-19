#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

using namespace std;
int impar,simpar,numero,digito;

int main()

{
numero=0;
impar=0;
simpar=0;
digito=0;
   cout<<"Ingrese numero...";
   cin>>numero;
   while(numero !=0)
   {
       digito=numero%10;
       numero=numero/10;
       cout<<digito;
       if(digito % 2 !=0)
       {
           impar++;
           simpar+=digito;
       }
   }
  cout<<"\n"<<"Numeros impares "<<impar;
  cout<<"\n"<<"Suma de impares "<<simpar;
}
