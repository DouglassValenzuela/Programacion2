#include <iostream>

using namespace std;
/*Ingresar  un numero
 el programa debera de escribir cuantas cifras
  tiene el numero.
  si tiene mas o igual a cuatro cifras escribir
  tiene mas de cuatro cifras
*/
int n1;
int main()
{
    cout << "Ingresar un numero...";
    cin>>n1;
  if (n1<0)
    n1*= (-1);// n1=n1 * (-1)

  if (n1<=9)
    cout<<"**Tiene una cifra**";
  else if (n1<=99)
    cout<<"**Tiene dos cifra**";
    else if (n1<=999)
    cout<<"**Tiene tres cifra**";
    else
    cout<<"**Tiene cuatro o mas de cuatro cifra**";
    return 0;

}
