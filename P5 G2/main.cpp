#include <iostream>

using namespace std;
int tab, i,tabla;
int main()
{
tab=0;

 for(tab=1;tab<=5;tab++)
  {
      tabla=tab;
      i=0;
      cout<<"\n"<<"tabla"<<tabla<<"\n";
    for(i=1;i<=10;i++)
        {
            tabla=tab*i;
        cout<<tab<<" * "<<i<<" = "<<tabla<<"\n";
        }
  }
}
