#include <iostream>
#include <time.h>
#include <stdlib.h>
#include<stdio.h>
using namespace std;
//generar 10 numeros entre 1-100 y al final del ciclo presentar el numero de pares e impares
int numero;
int pares;
int impares;
int i;
int main()
{
    srand(time(0));
 numero=0;
 pares=0;
 impares=0;
 i=0;

 while (i<10)
 {
     i++;
  numero=1+ rand() % (100-1) ;

  cout<<numero<<"\n";

  if (numero%2==0)
  {
      pares++;
  }
  else
    {
        impares++;
    }
 }

   cout<<"Numeros pares   "<<pares<<"\n";
   cout<<"Numeros impares   "<<impares;
}
