#include <iostream>
#include <stdlib.h>
using namespace std;
int n1,n2;
int main()
{
    cout << "Ingrese el primer numero...>";
    cin>>n1;
    cout << "Ingrese el segundo numero...>";
    cin>>n2;
    if (n1>n2)
    {
    cout <<n2<<"\n"<<n1;
    }
    else
    {
    cout <<n1<<"\n"<<n2;
    }

   cout<<"\n";
    system("PAUSE");
}
