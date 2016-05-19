#include <iostream>
#include<stdlib.h>
//ingresar un numero y determinar si es positivo, negativo o cero
using namespace std;
int numero;
int main()
{
    cout<<"Ingresar un numero";
    cin>> numero;
    if (numero>0)
    {
        cout<<"Es positivo";

    }
    else if (numero<0)
    {
        cout<<"Es Negativo";
    }
    else
    {
        cout<<"es cero";
    }
    cout<<"\n";
    system("PAUSE");
}
