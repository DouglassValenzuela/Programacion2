#include <iostream>

using namespace std;
/*ingresar la nota acumulada y examen del alumno y presentar la nota final*/
int NotaAcumulada,Examen,NotaFinal;
int main()
{
    cout<<"Nota Acumulada";
 cin>>NotaAcumulada;
 cout<<"Nota de examen";
 cin>>Examen;

 NotaFinal=NotaAcumulada+Examen;
 cout<<"Nota final es..."<<NotaFinal<<"\n";
 if (NotaFinal>=60)
 {
     cout<<"Aprobado";

}
 else
 {
     cout<<"Reprobado";
 }
 cout<<"\n";
}
