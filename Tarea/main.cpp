#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
/*Ingresar el dia de la semana en numero entero de 1-7,
luego indicar en letras el dia de la semana a que pertenece.*/
using namespace std;
int n1;
int main()
{
   cout << "Ingresar Numero >";
    cin>>n1;

     if (n1==1)
    {
        cout<<"Lunes";
    }
    else if (n1==2)
    {
        cout<<"Martes";
    }
     else if (n1==3)
    {
        cout<<"Miercoles";
    }
     else if (n1==4)
    {
        cout<<"Jueves";
    }
     else if (n1==5)
    {
        cout<<"Viernes";
    }
     else if (n1==6)
    {
        cout<<"Sabado";
    }
    else if (n1==7)
    {
        cout<<"Domingo";
    }
    else
    {
        cout<<"No valido";
    }
cout<<"\n";
     system("pause");
}
