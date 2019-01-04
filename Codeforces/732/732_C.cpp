// https://codeforces.com/contest/732/problem/C
// https://codeforces.com/contest/732/submission/21665568

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
   unsigned long long a[3], s = 0;
   cin >> a[0] >> a[1] >> a[2];
   sort(a, a + 3);


   if (a[2] - a[0] > 1)
   {
      if (a[2] - a[1] > 1)
      {
         s += (a[2] - a[1] - 1);
      }
      s += (a[2] - a[0] - 1);
   }
   cout << s;
   return 0;
}