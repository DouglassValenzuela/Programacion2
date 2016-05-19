#include <iostream>

using namespace std;
//Ingresar un numero y presentarlo al revez de cualquier cantidad de digitos
int numero, digito;

int main()
{
    digito=0;
    numero=0;
    cout<< "numero";
    cin>>numero;
while (numero>10)
{
    digito= numero%10;
    cout<<digito;
    numero= numero/10;
}
cout<<numero;
}
