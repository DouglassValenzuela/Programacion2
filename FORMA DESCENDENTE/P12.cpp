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
    if ((n1>n2) and (n1>n3) and (n3>n2))
    {
    cout <<n1<<"\n"<<n3<<"\n"<<n2;
    }
else if ((n2>n1) and (n2>n3) and (n1>n3))
    {
   cout <<n2<<"\n"<<n1<<"\n"<<n3;
    }
    else
    {
     cout <<n3<<"\n"<<n2<<"\n"<<n1;
    }

   cout<<"\n";
    system("PAUSE");
}
