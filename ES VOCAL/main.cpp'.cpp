#include <iostream>
#include <stdlib.h>
using namespace std;

int n1;
char caracter;
int main()

{
    cout << "Ingresar un caracter...>";
    cin>>caracter;
   switch (caracter)
    {
    case 'a' :
        cout<<"Si es una vocal";
        break;
   case 'e' :
        cout<<"Si es una vocal";
        break;
    case 'i' :
        cout<<"Si es una vocal";
        break;
    case 'o' :
        cout<<"Si es una vocal";
        break;
  case 'u' :
        cout<<"Si es una vocal";
        break;

    default:
        cout<<"No es una vocal";
        break;
    }
    cout<<"\n";
    system("PAUSE");
}
