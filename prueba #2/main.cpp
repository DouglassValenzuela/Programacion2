#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int numero;
int digito;
int main()
{
    srand(time(0));
    numero=100 + rand() % (1000-100);
    cout<<numero<<"\n";

    while(numero!=0)
    {
        digito=numero%10;
        numero=numero/10;

        cout<<digito;
    }
}
