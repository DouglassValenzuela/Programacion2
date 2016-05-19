#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int numero,i,con5;

int main()
{
srand(time(0));
    i=0;
    con5=0;
    while(i<10)
    {i++;

         numero=1 + rand()  %  (100-1);
        cout<<i<<"Numero   "<<numero<<"\n";
      if(numero%5==0)
      {
        con5++;
      }
    }
 cout<<"Numeros divisibles entre 5 ="<<con5<<"\n";
}
