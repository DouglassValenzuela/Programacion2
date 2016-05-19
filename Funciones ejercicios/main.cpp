#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
/*ingresar nombre del empleado, las ventas y su turno (1,2,3)
usando un procedimiento.
Luego debera de calcular el % de comision
usando una funcion.
Luego usando un procedimiento calcular la comision
ganada el ihss y total a pagar.
Presentar los datos usando un procedimiento.
1-5%

*/
char nombre[40];
char resp;
int turno;
float ventas, ihss, comis, pc, tp;
void ingresar(char nombre[], float &ventas, int &turno)
{
    cout<<"Nombre del empleado...>";
    cin.getline(nombre,40);
    cout<<"Ingresar ventas..>";
    cin>>ventas;
    do
    {
        cout<<"Ingresar el turno...>";
        cin>>turno;
    }while(!((turno>=1) and (turno<=3)));

}

    float pcomision(int turno) //una funcion
    {
        switch (turno)
        {
        case 1:
            return 0.05;
            break;
             case 2:
            return 0.04;
            break;
        default:
        return 0.06;
        break;

        }
    }
    void calcular (float ventas, int turno,
                   float &pc, float &comis, float &ihss, float &tp )
{
 pc= pcomision(turno);
 comis= ventas * pc;
 if (comis>7000)
    ihss=245;
 else

    ihss=0.035 *comis;
 tp= comis - ihss;
                   }
void presentar (float pc, float comis, float ihss,
                float tp)
        {
            cout<<"Por comision  "<<pc<<"\n";
            cout<<"Comision Ganada  "<<comis<<"\n";
            cout<<"Ihss  "<<ihss<<"\n";
            cout<<"Total pagar  "<<tp<<"\n";
        }
void pedir(char &resp)
{

    do
    {
       cout<<"Desea Continuar..>";
    cin>>resp;
    resp= toupper(resp);
    }while(!((resp=='N') or (resp=='S')));
}
int main()
{do
{

  ingresar(nombre,ventas,turno);
  calcular(ventas, turno, pc, comis, ihss, tp);
  presentar(pc, comis, ihss, tp);
  pedir(resp);
  _flushall();//Esto se usa para que no haya un salto
  if (mayor<comis)
    mayor=comis;
}while(resp!='N');
cout<<"Mayor..>"<<mayor;
}

