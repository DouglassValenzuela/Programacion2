#include <iostream>
#include <stdio.h>

using namespace std;
int x, i, tope;
int main()
{
    tope=5;
    x = 1;
    i = 1;
    while(x <= tope)
    {
        while (i <= x)
        {
            cout<<i;
            i++;
        }
        x++;
        i=1;
        cout<<"\n";
    }
}
