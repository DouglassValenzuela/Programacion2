#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int n1,n2,n3;
int main()

{
   cout << "Ingresar Numero 1 >";
    cin>>n1;

    cout << "Ingresar Numero 2 >";
    cin>>n2;

    cout << "Ingresar Numero 3 >";
    cin>>n3;
    if ((n1>n2) and (n1>n3))
    {
        cout<<"Numero mayor es "<<n1;
    }
    else if (n2>n3)
    {
        cout<<"Numero mayor es "<<n2;
    }
    else
    {
        cout<<"Numero mayor es "<<n3;
    }
    cout<<"\n";


    if ((n1<n2) and (n2<n3))
    {
        cout<<"Numeros ordenados en forma Ascendente";
    }
    else
    {
        cout<<"No esta en forma ascendente";
    }
     cout<<"\n";
    system("PAUSE");
}
