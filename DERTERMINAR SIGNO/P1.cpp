#include <iostream>
#include <stdlib.h>
using namespace std;
int n1;
int main()
{
    cout << "Ingresar numero...>";
    cin >> n1;
    if (n1>0)
    {
        cout<<"El numero es positivo";
    }
    else if (n1<0)
    {
        cout<<"El numero es negativo";

    }
    else
    {
        cout<<"El numero es cero";
    }
    cout<<"\n";
    system("PAUSE");
}
