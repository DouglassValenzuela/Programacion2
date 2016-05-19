#include <iostream>

using namespace std;
char R;
int numero,mayor;
int main()
{
    mayor=0;

while (R= 'N')
   {

    cout<<"Ingrese un numero..>";
    cin>>numero;
cout<<"Desea continuar..S o N  >";
    cin>>R;
     switch (R)
    {
    case 'S' :
    cout<<"Ingrese un numero..>";
    cin>>numero;
    cout<<"Desea continuar..S o N  >";
    cin>>R;
        break;

    default:
        cout<<"Caracter no valido";


    }
    }
}
