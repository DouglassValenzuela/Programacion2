#include <iostream>
#include <stdlib.h>
using namespace std;
int n1,n2,n3;
int main()
{
    cout << "Ingresar nota 1...>";
    cin>>n1;
    cout << "Ingrese nota 2...>";
    cin>>n2;
    cout << "Ingrese nota 3...>";
    cin>>n3;
    if ((n1>n2) and (n3>n2))
    {
    cout << "El promedio de sus dos mejores notas es..."<<((n1+n3)/2);
    }
else if ((n2>n1) and (n3>n1))
    {
   cout << "El promedio de sus dos mejores notas es..."<<((n2+n3)/2);
    }
    else
    {
     cout << "El promedio de sus dos mejores notas es..."<<((n1+n2)/2);
    }

   cout<<"\n";
    system("PAUSE");
}
