#include <iostream>
#include <stdlib.h>
using namespace std;
int n1;
int main()
{
    cout << "Ingrese un numero...>";
    cin>>n1;
    if (n1<0)
     n1= n1* (-1);

    if (n1<=9)
    {
        cout<<"El numero tiene una cifra";
    }
    else if (n1<=99)
    {
        cout<<"El numero tiene dos cifra";
    }
    else if (n1<=999)
    {
        cout<<"El numero tiene tres cifra";
    }
    else if (n1<=9999)
    {
        cout<<"El numero tiene cuatro cifra";
    }
    else
    {
        cout<<"El numero tiene mas de cuatro cifras";
    }
    cout<<"\n";
    system("PAUSE");
}
