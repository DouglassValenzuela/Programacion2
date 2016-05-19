#include <iostream>
#include <stdlib.h>
using namespace std;
int n1;
int main()
{
    cout << "Ingresar un numero...>";
    cin>>n1;
    switch (n1)
    {
    case 1:
        cout<<"LUNES";
        break;
    case 2:
        cout<<"MARTES";
        break;
    case 3:
        cout<<"MIERCOLES";
        break;
    case 4:
        cout<<"JUEVES";
        break;
    case 5:
        cout<<"VIERNES";
        break;
    case 6:
        cout<<"SABADO";
        break;
    case 7:
        cout<<"DOMINGO";
        break;
    default:
        cout<<"Dia incorrecto";
        break;
    }
    cout<<"\n";
    system("PAUSE");
}
