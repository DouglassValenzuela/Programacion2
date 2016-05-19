#include <iostream>
#include <stdlib.h>
using namespace std;
int n1,n2,n3;
int main()
{
    cout << "Ingrese el primer numero...>";
    cin>>n1;
    cout << "Ingrese el segundo numero...>";
    cin>>n2;
    cout << "Ingrese el tercer numero...>";
    cin>>n3;
    if ((n1<n2) and (n2<n3))
    {
    cout << "Los numeros estan en orden ascendente";
    }
    else
    {
     cout << "Los numeros NO estan en orden ascendente";
    }

   cout<<"\n";
    system("PAUSE");
}
