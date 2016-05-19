#include <iostream>

using namespace std;
int horas,pagohoras;
float pagot;

/*Ingresar las horas, el paho por hora luego calcular el pagot*/
int main()
{
   cout<<"Ingresar las horas";
 cin>>horas;
 cout<<"Ingresar pago por hora";
cin>>pagohoras;
 pagot=horas*pagohoras;
 cout<<"Pago total...>"<<pagot<<"\n";
}
