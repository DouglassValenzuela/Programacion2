#include <iostream>

using namespace std;
int numero;
int tabla=0;
int i;
int main()
{
    do
      tabla++;
    cout <<"\n"<< "Tabla "<<tabla;

    i=0;
    for(i=1;i<=10;i++)
        {
            tabla=numero*i;
        cout<<numero<<" * "<<i<<" = "<<tabla<<"\n";
        }

}
