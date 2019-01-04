// https://codeforces.com/contest/313/problem/A
// https://codeforces.com/contest/313/submission/14057579

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    long long n,aux;
    cin>>n;
    aux=n;
    int lc,sc;
    lc=abs(n%10);
    aux=aux/10;
    sc=abs(aux%10);
    aux=aux/10;
   if (n>=0)
    {
        cout<<n;
    }
    else
    {
        if (lc>=sc)
        {
            cout<<n/10;

        }
        else
        {
           n=n/100;
           n=n*10;;
           n-=lc;
           cout<<n;
        }
    }
    return 0;
}
