#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int num=0, suma=0,c=0, prom, mayor=0;
char resp;
int main()
{ do{
    do{
     srand(time(0));

    num =1 + rand() % (500-1);
    }while(!(num%2!=0));
    cout <<"Valor de Numero "<<num<<"\n";
    suma+=num;
if(mayor<num)
{
    mayor=num;
}
    do
    {
        cout<<"Desea Continuar   :";
        cin>>resp;
        resp=toupper(resp);
    }while ((resp!='S') and (resp!='N'));
    c++;
}while(resp!='N');
prom= suma / c;
cout<<"Promedio es  "<<prom<<"\n";
cout<<"Numero mayor es  "<<mayor<<"\n";


}
