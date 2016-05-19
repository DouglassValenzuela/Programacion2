#include <iostream>

using namespace std;
int num, mayor=0,c=1;
char resp;
int main()
{ do{
    do{
    cout <<c<< "Ingresar un numero impar y mayor a 50..>";
    cin>>num;
    }while(!((num%2!=0) and (num>50)));
if((num>100) && (mayor<num))
{
    mayor=num;
}

    c++;
}while(!(c>=11));

cout <<"Numero mayor arriba de 100 es ...>"<<mayor;

}
