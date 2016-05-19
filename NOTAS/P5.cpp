#include <iostream>
#include <stdlib.h>
using namespace std;
int nacumulada,nexamen,suma;
int main()
{
    cout << "Ingresar nota acumulada...>";
    cin>>nacumulada;
    cout << "Ingresar nota de examen...>";
    cin>>nexamen;
    suma=nacumulada + nexamen;
    if((suma==57) or  (suma==58) or (suma==59))
    {
    cout << "La nota final es=60";
    }
else
    {
      cout << "La nota final es="<<suma;

    }
   cout<<"\n";
    system("PAUSE");

}
