// https://codeforces.com/contest/432/problem/A
// https://codeforces.com/contest/432/submission/14416498

#include <iostream>

using namespace std;

int main()
{
   int n,k,x,nr=0;
   cin>>n>>k;
   while (n>0)
   {
       cin>>x;
       if (x+k<=5){nr++;}
       n--;
   }
   cout<<nr/3;
   return 0;

}
