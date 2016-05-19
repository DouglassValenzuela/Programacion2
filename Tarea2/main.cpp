#include <iostream>
//escribir un numero y presentarlo al reves

using namespace std;
int numero;
int invertido;
int main()
{

    cout<<"Ingresar Numero  ";
    cin>>numero;


 while (numero!=0)
 {
    invertido=numero%10;
       numero/=10;
    cout<<invertido;
 }

}
