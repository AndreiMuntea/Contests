// https://codeforces.com/contest/471/problem/A
// https://codeforces.com/contest/471/submission/14395079

#include <iostream>

using namespace std;

int a[10];

int find_picioare()
{
    int aux = -1;
    for (int i = 1;i <= 9;i++)
    {
        if (a[i]>=4)
        {
            aux = i;
        }
    }
    return aux;
}

int cauta_elefant()
{
    int aux = -1;
    for (int i=1;i<=9;i++)
    {
        if (a[i]>=2)
        {
            aux = i;
        }
    }
    return aux;
}

int main()
{
   int x;
   for (int i = 1;i <= 6;i++)
   {
       cin >> x;
       a[x]++;
   }
   int p = find_picioare();
   if (p==-1)
   {
       cout<<"Alien";
   }
   else
   {
       a[p]-=4;
       p = cauta_elefant();
       if (p==-1)
       {
           cout<<"Bear";
       }
       else
       {
           cout<<"Elephant";
       }
   }
   return 0;
}
