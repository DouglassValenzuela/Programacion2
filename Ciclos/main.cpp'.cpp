#include <iostream>

using namespace std;
int i=0, suma=0;
int num;
int main()
{
    while (i<5)
    {
        cout<<"Ingresar Numero  ";
        cin>>num;
        suma= suma + num; // suma += num;
        i++; //i=i+1
    }
    cout<<"suma de los numeros es"<<suma;
}
