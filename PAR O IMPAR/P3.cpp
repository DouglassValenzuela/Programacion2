#include <iostream>
#include <stdlib.h>
using namespace std;
int n1;
int main()
{
    cout << "Ingresar numero...>";
    cin>>n1;
    if(n1%2==0)
    {
        cout<<"El numero es par";
    }
    else
    {
        cout<<"El numero es impar";
    }
    cout<<"\n";
    system("PAUSE");
}
