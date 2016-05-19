#include <iostream>

using namespace std;
int numero, nprimo, i;
int main()
{
    i=1;

    while (i<100)
    {i++;

    if(( (i%2!=0) and (i%3!=0) and (i%5!=0))or (i==2) or (i==3) or (i==5))
    {
        numero=i;
        cout<<numero<<"\n";
    }
    }
}
