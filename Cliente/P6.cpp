#include <iostream>
#include <stdlib.h>
using namespace std;
int tcliente,cproducto,cprecio,subtotal,total;
int main()
{
    cout << "Tipo de cliente...>";
    cin>>tcliente;
    cout << "Cantidad de producto...>";
    cin>>cproducto;
    cout << "Precio...>";
    cin>>cprecio;
    subtotal= cproducto*cprecio;
    cout << "Subtotal="<<subtotal<<"\n";
    if (tcliente==1)
    {
    cout << "Total="<<(subtotal-(subtotal*0.07));
    }
else if (tcliente==2)
    {
    cout << "Total="<<(subtotal-(subtotal*0.08));
    }
    else if (tcliente==3)
    {
    cout << "Total="<<(subtotal-(subtotal*0.1));
    }
     else
    {
    cout << "Numero de tipo de cliente invalido";

    }
   cout<<"\n";
    system("PAUSE");
}
