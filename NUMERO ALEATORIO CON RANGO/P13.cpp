#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int n1;
int main()
{
    srand(time(0));
    n1=(1 + rand() % (200-1));
    cout << n1<<"\n";

    if ((n1>=14) and (n1<=60))
    {
       cout<<"Se encuentra en el rango de 14-60";
    }

    else if ((n1>=61) and (n1<=90))
    {
       cout<<"Se encuentra en el rango de 61-90";
    }
      else if ((n1>=91) and (n1<=160))
    {
       cout<<"Se encuentra en el rango de 91-160";
    }
      else if ((n1>=161) and (n1<=200))
    {
       cout<<"Se encuentra en el rango de 161-200";
    }
    else
    {
       cout<<"Se encuentra en el rango de 1-14";
    }
    cout<<"\n";
    system("PAUSE");
}
