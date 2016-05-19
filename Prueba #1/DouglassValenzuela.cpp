#include <iostream>

using namespace std;
int numero, digito, suma, contar, promedio;
int main()
{
    numero=0;
    digito=0;
    suma=0;
    contar=0;
    promedio=0;
    cout << "Ingrese numero   ";
    cin>>numero;
    while(numero !=0)
    {
        digito=numero%10;
        numero=numero/10;
        contar++;
        suma+=digito;
    }
    promedio=suma/contar;
    cout<< "La suma de las cifras es   "<<suma;
    cout<<"\n"<< "El promedio es   "<<promedio;
    system(PAUSE);
}
