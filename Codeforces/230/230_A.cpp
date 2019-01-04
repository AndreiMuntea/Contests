// https://codeforces.com/contest/230/problem/A
// https://codeforces.com/contest/230/submission/14058507

#include <iostream>
#include <algorithm>
using namespace std;

struct dragon{
    int level,power;
};

bool accompare (dragon lhs, dragon rhs){return lhs.level<rhs.level;}

int main()
{
   dragon list[10000];
   int n,s;
   cin>>s>>n;
   for (int i=0;i<n;i++)
   {
       cin>>list[i].level>>list[i].power;
   }
   sort(list,list+n,accompare);
   bool ok=true;
   int i=0;
   while (i<n && ok==true)
   {
       if (s<=list[i].level)
       {
           ok = false;
       }
       else
       {
           s=s+list[i].power;
           i++;
       }
   }
   if (ok==false)
   {
       cout<<"NO";
   }
   else
   {
       cout<<"YES";
   }
   return 0;
}
