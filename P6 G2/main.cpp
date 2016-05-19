#include <iostream>

using namespace std;
int turno,horas,Th, pago, i, mayor;
char resp;

int main()
{

do{
        do

{
do
{cout<<"Escribir el turno de trabajo(1,2,3)..>";
cin>>turno;
} while ((turno!=1) && (turno!=2) && (turno!=3) ); // validar el turno
i=0;
for (i=1;i<=5;i++)
{cout<<"Escriba el numero de horas trabajadas"<<"\n";
cin>>horas;
Th+=horas;
}// pedir las horas
//Presentar los datos
pago=Th*100;
cout<<"Total horas trabajadas= "<<Th<<"\n";
cout<<"Pago= "<<pago<<"\n";
if(mayor<pago)
{
    mayor=pago;
}
cout<<"Desea Continuar (S/N)..>";
cin>>resp;
}while ((resp !='N' ) && (resp !='S')); // validar respuesta

}while (resp !='N' );
cout<<"Mejor pago="<<mayor<<"\n";
}
