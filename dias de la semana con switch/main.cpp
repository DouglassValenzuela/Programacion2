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
    switch (n1)
    {
    case 1:
        cout<<"Lunes";
        break;
    case 2:
        cout<<"Martes";
        break;
    case 3:
        cout<<"Miercoles";
        break;
    case 4:
        cout<<"Jueves";
        break;
    case 5:
        cout<<"Viernes";
        break;
    case 6:
        cout<<"Sabado";
        break;
    case 7:
        cout<<"Domingo";
        break;
    default :
          cout<<"Dia incorrecto";
          break;
    }
}
