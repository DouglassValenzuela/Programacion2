#include <iostream>
#include <stdio.h>

using namespace std;
int num,cp=0,mayor=0;
char resp;

int main()
{do
{
    cout<<"Ingresar Numero  ";
    cin>>num;
    //_flushball;
    if(num%2==0)
    {
        cp++;
        if(num>mayor)
            mayor=num;
    }

   do
   {
       cout<<"Desea continuar   ";
       cin>>resp;
       resp=toupper(resp);
   }while ((resp!='S') && (resp!='N'));
}while (resp!='N');
cout<<"Mayor de los pares  "<<mayor<<"\n";
}
