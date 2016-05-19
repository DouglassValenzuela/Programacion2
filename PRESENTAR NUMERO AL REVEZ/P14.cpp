#include <iostream>
#include <stdlib.h>
using namespace std;
int n1,n2,n3,n4;
int main()
{
    cout << "Ingrese un numero de tres cifras...>";
    cin>>n1;
    n2= (n1%10);
    n3= ((n1%100)/10);
    n4= (n1/100);
    if ((n1>99) and (n1<=999))
   {
     cout<<n2<<n3<<n4;
   }
    else
    {
        cout<<"Ese numero no es de tres cifras";
    }


   cout<<"\n";
    system("PAUSE");
}
