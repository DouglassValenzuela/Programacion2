#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int i,numero, numerospar;
int main()
{srand(time(0));
i=0;
numero=0;

  while (i<10)
  {numero=1+ rand() % (100-1);
    if(numero%2==0)
{
    numerospar=numero;
    i++;
    cout<<numerospar<<"\n";
}

  }


}
